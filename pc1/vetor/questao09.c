#include<stdio.h>
#define LIN 12
#define COL 13

void main(){

	float vet[LIN][COL];
	float maior;

	for(int i=0; i<LIN; i++){
		for(int j=0; j<COL; j++){
			printf("Informe [%d][%d]: ", i,j);
			scanf("%f", &vet[i][j]);
			if(j==0){
				maior = vet[i][j];
			}else if(vet[i][j] > maior){
				maior = vet[i][j];
			}
		}
//		printf("Maior da linha %.2f\n", maior);
		for(int j=0;j<COL;j++){
			vet[i][j] /= maior;
		}
	}

	for(int i=0;i<LIN;i++){
		for(int j=0;j<COL;j++){
			printf("[%d][%d] = %.2f\n", i,j,vet[i][j]);
		}
	}
}
