#include<stdio.h>
#define LIN 3
#define COL 3

void mostrar_mat(int mat[][COL]){

	for(int i=0;i<LIN;i++){
		for(int j=0;j<COL;j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}

}

//origem -> linha de origem
//destino -> linha de destino
void troca_linha(int mat[LIN][COL], int origem, int destino){

	int i=0, aux[LIN];

	printf("Troca da linha %d com a linha %d!\n", origem, destino);
	for(i=0;i<LIN;i++){
		aux[i] = mat[origem][i];
		mat[origem][i] = mat[destino][i];
		mat[destino][i] = aux[i];
	}

	printf("\nMatriz alterada: \n");
	mostrar_mat(mat);
}

//origem -> coluna de origem
//destino -> coluna de destino
void troca_coluna(int mat[LIN][COL], int origem, int destino){

	int i=0, aux[COL];

	printf("Troca da coluna %d com a coluna %d!\n", origem, destino);
	for(i=0;i<COL;i++){
		aux[i] = mat[i][origem];
		mat[i][origem] = mat[i][destino];
		mat[i][destino] = aux[i];
	}

	printf("\nMatriz alterada: \n");
	mostrar_mat(mat);
}

void main(){

	int mat[LIN][COL];

	for(int i=0;i<LIN;i++){
		for(int j=0;j<COL;j++){
			printf("Informe [%d][%d]: ", i,j);
			scanf("%d", &mat[i][j]);
		}
	}

	printf("Matriz original\n");
	mostrar_mat(mat);

	troca_linha(mat,0,1);
	troca_coluna(mat,0,1);
}
