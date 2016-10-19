#include<stdio.h>
#define LIN 15
#define COL 5

int vlr_igual(int vet[][COL], int num){

	int vzs = 0;

	for(int i=0; i<LIN; i++){
		for(int j=0;j<COL;j++){
			if(vet[i][j] == num){
				vzs++;
			}
		}
	}
	return vzs;
}

void main(){

	int A[LIN][COL];

	//entrada de valores
	for(int i=0; i<LIN; i++){
		for(int j=0; j<COL;j++){
			printf("Informe [%d][%d]: ", i,j);
			scanf("%d", &A[i][j]);
		}
	}

	for(int i=0;i<LIN;i++){
		for(int j=0;j<COL;j++){
			printf("%d aparece %d vezes!\n", A[i][j], vlr_igual(A, A[i][j]));
		}
	}
}
