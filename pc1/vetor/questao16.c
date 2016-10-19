#include<stdio.h>
#define TAM 50

void ler_matriz(int mat[TAM][TAM]){

	int i,j;

	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			printf("Informe a posicao [%d][%d]: ",i,j);
			scanf("%d", &mat[i][j]);
		}
	}

}

int maior_elemento(int mat[TAM][TAM]){
	int i,j,maior;
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			if(i==0){
				maior = mat[i][j];
			}else if(mat[i][j] > maior){
				maior = mat[i][j];
			}
		}
	}
	return maior;
}

void main(){

	int matriz[TAM][TAM],i,j;
	int maior;

	ler_matriz(matriz);
	maior = maior_elemento(matriz);

	for(i=0;i<TAM;i++){
		matriz[i][i] *= maior;
	}

	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}
