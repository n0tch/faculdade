#include<stdio.h>

int LIN, COL;


//conto as linhas do txt e altero as variaveis globais
int contar_linhas();
//leio o conteudo do txt e armazeno na variavel mat
void ler_matriz(float mat[LIN][COL]);
//funcao para escalonar a matriz
void escalonar(float mat[LIN][COL], int linha);
//funcao para imprimir a matriz
void imprimir(float mat[LIN][COL]);
//funcao para mudar as linhas da matriz caso o pivo seja 0 (para evitar indeterminacao do tipo 0/0)
void mudar_linhas(float mat[LIN][COL], int linha);
//funcao para encontrar o maior elemento para que seja feita a mudanca das linhas
int maior_elem(float mat[LIN][COL], int linha);
//funcao para substituicao retroativa da matriz escalonada
void s_r_matriz(float mat[LIN][COL]);
//funcao para imprimir o vetor de resposta da matriz
void p_resposta(float resp[LIN]);

void main(){
	if(contar_linhas()){

		int i;

		contar_linhas();
		float mat[LIN][COL];
		//mat -> var principal, pois faco todas as operacoes de escalonamento nesta matriz
		ler_matriz(mat);
		
		printf("Matriz Original\n");
		imprimir(mat);

		for(i=0;i<COL;i++){
			//caso o pivo seja 0, chamo a funcao para mudar a linha para o maior valor das outras linhas de mesma coluana
			if(mat[i][i] == 0)
				mudar_linhas(mat,i);

			escalonar(mat,i);
		}
		printf("Matriz Escalonada\n");
		imprimir(mat);
		s_r_matriz(mat);
	}else{
		printf("Arquivo n encontrado!\n");
	}
}

int contar_linhas(){

	//abro o arquivo
	FILE *arq;
	arq = fopen("matriz.txt", "r");
	//variavel para armazenar a qnt de linhas do txt
	//tomo como base as linhas do txt para dizer a ordem do sistema
	if(arq != NULL){
		int linhas=0;

		//percorro todo o txt
		while(!feof(arq)){
		//feof retorna 1 quando o arquivo chega ao final, por isso nego
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
		
		// LIN = linhas;
		// COL = linhas + 1;

		LIN = linhas + 1;
		COL = LIN + 1;
		return 1;
	}else{
		return 0;
	}
}

//le o conteudo de um txt
void ler_matriz(float mat[LIN][COL]){

	FILE *arq;
	arq = fopen("matriz.txt", "r");

	for(int i=0;i<LIN;i++){
		for(int j=0; j<COL;j++){
			fscanf(arq, "%f", &mat[i][j]);
		}
	}
	fclose(arq);
}

void imprimir(float mat[LIN][COL]){
	for(int i=0;i<LIN;i++){
		for(int j=0; j<COL;j++){
			printf("%.2f ", mat[i][j]);
		}
		printf("\n");
	}
}

//segundo parametro referente a linha/pivo que estou escalonando
void escalonar(float mat[LIN][COL], int linha){
	int i,j;
	float mult;

	for(i=linha+1;i<LIN;i++){
		//mult = linha atua / pivo
		mult = mat[i][linha] / mat[linha][linha];
		for(j=0;j<COL;j++){
			//linha atual = linha atual -(mult) * (linha do pivo, coluna j)
			mat[i][j] = mat[i][j]-mult*mat[linha][j];
		}
	}
}

void mudar_linhas(float mat[LIN][COL], int linha){
	int i,aux;
	//i -> contador
	//aux -> var para auxiliar na troca dos elementos da linha

	int pivo = maior_elem(mat,linha);
	//pivo recebe o indice da linha em que o maior elemento esta
	//retorno 0 caso nao haja mudanca de linhas

	if(pivo){
		for(i=0;i<COL;i++){
			//algoritmo de troca de linhas da matriz basica
			aux = mat[linha][i];
			mat[linha][i] = mat[pivo][i];
			mat[pivo][i] = aux;
		}
	}
}

int maior_elem(float mat[LIN][COL], int linha){
	int i,j,indice_m=-1;
	//inicializo indice_m com -1 para ter controle da mudanca de valor da variavel
	//retorno 0 caso ela n seja alterada

	float m;
	//m -> maior valor

	for(i=linha;i<LIN;i++){
		if(i==0){
		//caso seja a primeira execucao assumo mat[linha][linha] como o maior elemento
			m = mat[i][linha];
			indice_m = i;
		}else if(mat[i][linha] > m){
			m = mat[i][linha];
			indice_m = i;
		}
	}

	if(indice_m == -1){
		return 0;
	}else{
		return indice_m;
	}
}

void s_r_matriz(float mat[LIN][COL]){

	//vetor para guardar as respostas
	float resp[LIN];
	int i,j;

	/*
	inicializo o vetor das respostas com 1 em todas as posicoes
	pois o for abaixo multiplica cada posicao da matriz pela mesma
	posicao do vetor respostas, caso a posicao seja 1 o valor nao
	sera alterado
	*/
	for(i=0;i<LIN;i++){
		resp[i] = 1;
	}

	//aux garda a soma dos elementos da LINha i da matriz
	float aux=0;

	//inicializo o for de baixo para cima
	for(i=LIN-1;i>=0;i--){
		for(j=COL-1;j>=0;j--){
			if(j==(COL-1)){
				//j == COL-1 significa que estou no
				//termo independente
				//entao apenas somo.
				aux += mat[i][j];
			}else if(i!=j){
				//somo o inverso de todos os numeros
				//com excessao do pivo por isso do i != j
				aux += (-1*mat[i][j]) * (resp[j]);
			}
		}
		//divido aux pelo valor do pivo
		if(mat[i][i] == 0){
			aux =0;
		}else{
			aux /= mat[i][i];
		}
		//armazeno o resultado no vetor de respostas
		resp[i] = aux;
		//zero o acumulador
		aux = 0;
	}

	p_resposta(resp);
}

void p_resposta(float resp[LIN]){

	int i=0;

	printf("\nRespostas\n");
	for(i=0;i<LIN;i++){
		//imprimo o vetor de resposta
		printf("x[%d] = %.2f\n", i+1,resp[i]);
	}

}