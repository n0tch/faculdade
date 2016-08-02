#include<stdio.h>
#define tamanho 10

void main(){
	int A[tamanho], B[tamanho];

	for(int i=0; i<tamanho; i++){
		printf("Informe o valor da posicao %d: ",i+1);
		scanf("%d", &A[i]);

		if(A[i] > 0){
			B[i] = A[i];
		}else{
			B[i] = 0;
		}
	}

	printf("Vetor A\t\tVetor B\n");
	for(int i=0; i<tamanho; i++){
		printf("%d\t\t%d\n", A[i], B[i]);
	}
}
