#include<stdio.h>
#define LIN 6
#define COL LIN+1

//imprimit matriz
void i_matriz(float mat[LIN][COL]);
//preencher matriz
void p_matriz(float mat[LIN][COL]);
//multiplicador da matriz
float m_matriz(float mat[LIN][COL], int i, int j);
//escalonar a matriz
void e_matriz(float mat[LIN][COL],  int linha);
//substituicao retroativa da matriz
void s_r_matriz(float mat[LIN][COL]);

int main(){

	float matriz[LIN][COL];
	float mult;

	p_matriz(matriz);
	printf("Matriz original: \n");
	i_matriz(matriz);
	for(int i=0;i<LIN;i++){
		e_matriz(matriz, i);
	}

	printf("Matriz Escalonada: \n");
	i_matriz(matriz);
	//printf("LOL:\n");
	//s_r_matriz(matriz);
	return 0;
}


//imprime matriz
void i_matriz(float mat[LIN][COL]){

	for(int i=0;i<LIN;i++){
		for(int j=0; j<COL;j++){
			printf("%.2f ", mat[i][j]);
		}
		printf("\n");
	}
}

//preenche matriz
void p_matriz(float mat[LIN][COL]){

	FILE *arq;
	arq = fopen("matriz.txt", "r");

	for(int i=0;i<LIN;i++){
		for(int j=0; j<COL;j++){
			fscanf(arq, "%f", &mat[i][j]);
		}
	}

}

//multiplicador matriz
//i -> linha
//j -> coluna
float m_matriz(float mat[LIN][COL], int i, int j){

	float m;

	if(i == (LIN-1)){
		//caso i == TAM-1, significa que estou na ultuma linha da matriz
		//entao retorno o proprio i, pois vou dividir o i pelo proprio i
		//e obter a ultima linha sem alteracao
		m = i;
	}else if(mat[j][i] != 0){
		//preciso garantir que a mat[j][i] seja diferente de zero
		//para que nao haja indeterminacao do tipo 0/0.
		m = mat[j][i] / mat[i][i];
	}else{
		//caso chegue aqui significa que o pivo eh 0
		m = 0;
	}
	return m;
}


//escalonamento da matriz
void e_matriz(float mat[LIN][COL],  int linha){

	float vet[COL];
	float mult;

	for(int i=linha+1;i<LIN;i++){
		//armazeno o multiplicador da linha em mult
		mult = m_matriz(mat,linha, i);
		for(int j=0;j<COL;j++){
			//o vet recebe o (mult*-1) * (a linha do pivo)
			vet[j] = (-1*mult)*mat[linha][j];
			//somo linha de destino com o vet
			mat[i][j] += vet[j];
		}
//		printf("\n");
	}
}

void s_r_matriz(float mat[LIN][COL]){

	float resp[LIN];
	//vetor para guardar as respostas
	float aux=0;
	int i,j;

	for(i=LIN-1;i>=0;i--){
		for(j=COL-1;j>=0;j--){
			if(j==(COL-1)){
				//j == col-1 significa que estou no
				//termo independente
				//entao apenas somo.
				aux += mat[i][j];
			}else if(i!=j){
				//somo o inverso de todos os numeros
				//com a excessao do pivo
				aux += (-1*mat[i][j]);
			}
		}
		//divido o acumulador pelo valor do pivo
		aux /= mat[i][i];
		printf(">>> %.2f\n", aux);
		resp[j] = aux;
		printf("\n");
	}
}
