#include <stdio.h>
#define TAM 10

int soma_diagonal_p(int mat[TAM][TAM]){
	int i,j, soma=0;

	for(i=0;i<TAM;i++){
		soma+=mat[i][i];
	}

	return soma;
}

int soma_diagonal_s(int mat[TAM][TAM]){
	int i,j, soma=0;

	for(i=0;i<TAM;i++){
		soma+=mat[i][(TAM-1)-i];
	}

	return soma;
}

void main(){

	int i,j,mat[TAM][TAM];

	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			printf("Informe a pos [%d][%d]: ",i,j);
			scanf("%d", &mat[i][j]);
		}
	}

	printf("Soma Diagonal pricipal: %.2f\n", soma_diagonal_p(mat)/TAM);

	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}

	printf("Soma Diagonal secundaria: %.2f\n", soma_diagonal_p(mat)/TAM);
}