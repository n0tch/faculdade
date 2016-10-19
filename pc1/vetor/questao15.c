#include<stdio.h>
#define TAM 20

void ler_matriz(int mat[TAM][TAM], int soma_linhas[TAM]){

	int i,j;
	for(i=0;i<TAM;i++){
		soma_linhas[i] = 0;
		for(j=0;j<TAM;j++){
			printf("Informe a posicao [%d][%d]: ", i,j);
			scanf("%d", &mat[i][j]);
			soma_linhas[i] += mat[i][j];
		}
	}
}

void main(){

	int matriz[TAM][TAM], soma[TAM];
	int i,j;
	ler_matriz(matriz, soma);

	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			matriz[i][j] *= soma[i];
		}
	}

	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}
