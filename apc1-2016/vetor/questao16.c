#include<stdio.h>
#define tamanho 10

void main(){
	int X[tamanho], Y[tamanho], Z[tamanho];
	int i;
	printf("------Vetor X-------\n");
	for(i=0; i<tamanho; i++){
		printf("Informe o valor da posicao %d: ",i+1);
		scanf("%d", &X[i]);
	}

	printf("\n------Vetor Y-------\n");
	for(i=0; i<tamanho; i++){
		printf("Informe o valor da posicao %d: ", i+1);
		scanf("%d", &Y[i]);
	}

	printf("\nLetra A - Subtracao\n");
	for(i=0; i<tamanho; i++){
		Z[i] = X[i] - Y[i];
	}

	for(i =0; i<tamanho; i++){
		printf("Z[%d] = %d\n", i, Z[i]);
	}

	printf("\nLetra B - Adicao\n");
	for(i=0; i<tamanho; i++){
		Z[i] = X[i] + Y[i];
	}
	for(i=0;i<tamanho;i++){
		printf("Z[%d] = %d\n", i, Z[i]);
	}

	printf("\nLetra C - Produto\n");
	for(i=0;i<tamanho;i++){
		Z[i] = X[i] * Y[i];
	}
	for(i=0;i<tamanho;i++){
		printf("Z[%d] = %d\n", i, Z[i]);
	}
}
