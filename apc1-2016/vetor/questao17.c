#include<stdio.h>
#include<math.h>
#define tamanho 15

void main(){
	int K[tamanho], vzs=0, P[tamanho];
	for(int i=0; i<tamanho; i++){
		printf("Informe o valor da posicao %d: ", i+1);
		scanf("%d", &K[i]);
	}

	for(int i=0; i<tamanho; i++){
		for(int j=1; j<=sqrt(K[i]); j++){
			if(K[i] == 1){//garanto que o 1 nao seja apresentado
				vzs++;
			}
			if(K[i]%j==0){
				vzs++;
			}
		}
		if(vzs == 1){
			P[i] = K[i];
		}else{
			P[i] = 0;
		}
		vzs=0;
	}
	printf("Vetor P:\n");
	for(int i=0; i<tamanho; i++){
		if(P[i] != 0){
			printf("%d ", P[i]);
		}
	}
	printf("\n");
}
