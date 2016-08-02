#include<stdio.h>
#define tamanho 10

void main(){
	int A[tamanho], B[tamanho], soma=0;
	printf("Vetor A\n");
	for(int i=0; i<tamanho; i++){
		printf("Posicao %d: ", i+1);
		scanf("%d", &A[i]);
	}

	printf("Vetor B\n");
	for(int i=0;i<tamanho;i++){
		printf("Posicao %d: ",i+1);
		scanf("%d", &B[i]);
	}

	for(int i=0; i<(tamanho); i++){
		printf("%d - %d = %d\n", A[i],B[(tamanho-1)-i],A[i]-B[(tamanho-1)-i]);
		soma += (A[i]-B[(tamanho-1)-i]);
	}
	printf("Soma: %d\n", soma);
}
