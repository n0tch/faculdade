#include<stdio.h>
#define LIN 4
#define COL 4

void mostrar_mat(int mat[LIN][COL]){

	for(int i=0;i<LIN;i++){
		for(int j=0;j<COL;j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}

}

void troca_diagonais(int mat[LIN][COL]){

	//auxP -> auxiliar dos valores da diagonal principal
	//auxS -> auxiliar dos valores da diagonal secundaria
	int i,j;
	int auxP, auxS;

	for(i=0;i<LIN;i++){
		for(j=0;j<COL;j++){
			if(i==j){
				//printf("i: %d ", i);
				auxP = mat[i][j];
				printf("auxP: %d ", auxP);
			}else if(i+j == (LIN-1)){
				auxS = mat[i][j];
				printf("auxS: %d ", auxS);
				mat[i][i] = auxS;
				mat[i][j] = auxP;
			}
		
//			auxP = mat[i][origem];

			printf("\nj: %d", j);
		}
		printf("\n");
	}

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

	mostrar_mat(mat);

	troca_diagonais(mat);
}
