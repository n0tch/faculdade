#include<stdio.h>
#define tamanho 20
void main(){
	int vetor[6], vzs=0;
	for(int i=0;i<tamanho;i++){
		printf("Informe a posicao %d: ", i+1);
		scanf("%d", &vetor[i]);
	}

	for(int i=0;i<tamanho;i++){
		if(vetor[i]%2 == 0){
			vzs++;
		}
	}

	printf("%d numeros pares no vetor!\n", vzs);
}
