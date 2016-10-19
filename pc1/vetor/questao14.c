#include <stdio.h>
#define LIN 3
#define COL 3

int soma_pares(int mat[LIN][COL]){
	int i,j, soma=0;
	for(i=0;i<LIN;i++){
		if(i%2 == 0){
			for(j=0;j<COL;j++){
				soma+=mat[i][j];
			}
		}
	}

	return soma;
}

void main(){

	int i,j,mat[LIN][COL];

	for(i=0;i<LIN;i++){
		for(j=0;j<COL;j++){
			printf("Informe a pos [%d][%d]: ",i,j);
			scanf("%d", &mat[i][j]);
		}
	}

	printf("Soma das linhas pares: %d\n", soma_pares(mat));
}