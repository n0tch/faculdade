#include<stdio.h>
#define tamanho 20

void main(){
	int X[tamanho], vzs=0;

	for(int i=0; i<tamanho; i++){
		printf("Informe o valor na posicao %d: ", i+1);
		scanf("%d", &X[i]);
	}

	for(int i=0; i<tamanho; i++){
		printf("O valor %d aparece ", X[i]);
		for(int j=0; j<tamanho; j++){
			if(X[i] == X[j]){
				vzs++;
			}
		}
		printf("%d vezes!\n", vzs);
		vzs=0;
	}
}
