#include<stdio.h>

/*
variaveis para determinar o tamanho das matrizes do sistema.if (entrada == NULL)
a funcao contar_linhas ira encontrar o tamanho da matriz no txt
e alterar estas variaveis de acordo com o que tiver no txt
*/

int lin=0;
int col=0;

//imprimit matriz
void i_matriz(float mat[lin][col]);
//preencher matriz
void p_matriz(float mat[lin][col]);
//multiplicador da matriz
float m_matriz(float mat[lin][col], int i, int j);
//escalonar a matriz
void e_matriz(float mat[lin][col],  int linha);
//substituicao retroativa da matriz
void s_r_matriz(float mat[lin][col]);
//contar linhas do txt
void contar_linhas();
//imprime as respostas do sistema
void p_resposta(float resp[lin]);

int main(){

	/*
	executo esta funcao antes de tudo, pois a primeira coisa a se fazer
	eh determinar o tamanho da minha matriz
	*/
	contar_linhas();
	float matriz[lin][col];
	float mult;

	p_matriz(matriz);
	printf("Matriz original: \n");
	i_matriz(matriz);
	for(int i=0;i<lin;i++){
		e_matriz(matriz, i);
	}

	printf("\nMatriz Escalonada: \n");
	i_matriz(matriz);
	//printf("LOL:\n");
	s_r_matriz(matriz);
	return 0;
}


//imprime matriz
void i_matriz(float mat[lin][col]){

	for(int i=0;i<lin;i++){
		for(int j=0; j<col;j++){
			printf("%.2f ", mat[i][j]);
		}
		printf("\n");
	}
}

//preenche matriz
void p_matriz(float mat[lin][col]){

	FILE *arq;
	arq = fopen("matriz.txt", "r");

	for(int i=0;i<lin;i++){
		for(int j=0; j<col;j++){
			fscanf(arq, "%f", &mat[i][j]);
		}
	}

	fclose(arq);

	contar_linhas();
	printf("Ordem da matriz: %d!\n", lin);

}

//multiplicador matriz
//i -> linha
//j -> coluna
float m_matriz(float mat[lin][col], int i, int j){

	float m;

	if(i == (lin-1)){
		/*
		caso i == TAM-1, significa que estou na ultuma linha da matriz
		entao retorno o proprio i, pois vou dividir o i pelo proprio i
		e obter a ultima linha sem alteracao
		*/
		m = i;
	}else if(mat[j][i] != 0){
		/*
		preciso garantir que a mat[j][i] seja diferente de zero
		para que nao haja indeterminacao do tipo 0/0.
		*/
		m = mat[j][i] / mat[i][i];
	}else{
		//caso chegue aqui significa que o pivo eh 0
		m = 0;
	}
	return m;
}


//escalonamento da matriz
void e_matriz(float mat[lin][col],  int linha){

	float vet[col];
	float mult;

	for(int i=linha+1;i<lin;i++){
		//armazeno o multiplicador da linha em mult
		mult = m_matriz(mat,linha, i);
		for(int j=0;j<col;j++){
			//o vet recebe o (mult*-1) * (a linha do pivo)
			vet[j] = (-1*mult)*mat[linha][j];
			//somo linha de destino com o vet
			mat[i][j] += vet[j];
		}
//		printf("\n");
	}
}

void s_r_matriz(float mat[lin][col]){

	float resp[lin];

	//inicializo o vetor das respostas com 1 em todas as posicoes
	for(int i=0;i<lin;i++){
		resp[i] = 1;
	}

	//vetor para guardar as respostas
	float aux=0;
	int i,j;

	printf("\n");
	for(i=lin-1;i>=0;i--){
		for(j=col-1;j>=0;j--){
			if(j==(col-1)){
				//j == col-1 significa que estou no
				//termo independente
				//entao apenas somo.
				aux += mat[i][j];
			}else if(i!=j){
				//somo o inverso de todos os numeros
				//com a excessao do pivo
				aux += (-1*mat[i][j]) * (resp[j]);
			}
		}
		//divido o acumulador pelo valor do pivo
		aux /= mat[i][i];
		//armazeno o resultado no vetor de respostas
		resp[i] = aux;
		//zero o acumulador
		aux = 0;
	}

	p_resposta(resp);
}

void p_resposta(float resp[lin]){

	int i=0;

	printf("Respostas\n");
	for(i=0;i<lin;i++){
		printf("x[%d] = %.2f\n", i+1,resp[i]);
	}
}

void contar_linhas(){

	//abro o arquivo
	FILE *arq;
	arq = fopen("matriz.txt", "r");
	//variavel para armazenar a qnt de linhas do txt
	//tomo como base as linhas do txt para dizer a ordem do sistema
	int linhas=0;

	//percorro todo o txt
	while(!feof(arq)){
	//feof retorna true quando o arquivo chega ao final
		if(fgetc(arq) == '\n'){
		//quando encontro um \n significa que vou para uma nova linha do txt
			linhas++;
		}
	}

	//fecho o arquivo
	fclose(arq);

	/*
	altero o valor das variaveis globais
	e por consequencia altero o tamanho das matrizes do programa
	de acordo com o tamanho da matriz lida no txt
	*/
	lin = linhas;
	col = linhas + 1;
}
