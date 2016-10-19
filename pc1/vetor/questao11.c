#include<stdio.h>
#define TAM 5

void ordena_mat(int mat[TAM][TAM]){

	int i,j,k,aux;

	for(k=1;k<(TAM*TAM); k++){
		for(i=0;i<TAM;i++){
		    for(j=0;j<TAM;j++){
		        if(mat[i][j] > mat[i][j+1] && j < TAM -1){
		                aux = mat[i][j];
		                mat[i][j] = mat[i][j+1];
		                mat[i][j+1] = aux;
		         }
		         if(j == TAM-1 && i< TAM-1 && mat[i][j] > mat[i+1][0]){
		                aux = mat[i][j];
		                mat[i][j] = mat[i][j+1];
		                mat[i][j+1] = aux;
		         }
		    }
		}
	}
}

void main(){

	int i,j, mat[TAM][TAM];

	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			printf("Informe a pos [%d][%d]: ",i,j);
			scanf("%d", &mat[i][j]);
		}
	}

	ordena_mat(mat);

	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
}
