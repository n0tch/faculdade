//refazer.
#include<stdio.h>
#define tamanho 10

void main(){
	int vetor[tamanho], m1, m2, m3;
	for(int i=0; i<tamanho; i++){
		printf("Informe o valor da posicao %d: ", i+1);
		scanf("%d", &vetor[i]);
	}
	//printf("%d %d %d\n", m1,m2,m3);

	for(int i=0, aux; i<tamanho; i++){
		for(int j=0;j<tamanho; j++){
			if(vetor[i] < vetor[j]){
				aux=vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = aux;
			}
		}
	}
	for(int i=0; i<3; i++){
		printf("%d ", vetor[i]);
	}
	printf("\n");
}
