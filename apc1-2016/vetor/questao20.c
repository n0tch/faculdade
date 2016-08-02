#include<stdio.h>
#define tamanho 10

void main(){
	float vetor[tamanho], maior;

	for(int i=0; i<tamanho; i++){
		printf("Informe o valor da posicao %d: ", i+1);
		scanf("%f", &vetor[i]);
		if(i==0){
			maior = vetor[i];
		}else if(maior < vetor[i]){
			maior = vetor[i];
		}
	}

	for(int i=0; i<tamanho; i++){
		vetor[i] /= maior;
	}

	for(int i=0; i<tamanho; i++){
		printf("Vetor[%d] = %.2f\n", i, vetor[i]);
	}
}
