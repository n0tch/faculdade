#include<stdio.h>

#define tamanho 20

void main(){
	int F[tamanho], G[tamanho], produto = 0;
	for(int i=0; i<tamanho; i++){
		printf("Informe F[%d]: ",i+1);
		scanf("%d", &F[i]);
		printf("Informe G[%d]: ", i+1);
		scanf("%d", &G[i]);

		//produto += (F[i] * G[i]);
	}

	for(int i=0; i<tamanho; i++){
		produto += (F[i] * G[i]);
		printf("%d * %d = %d\n", F[i], G[i], F[i]*G[i]);
		printf("Produto: %d\n\n", produto);
	}
}
