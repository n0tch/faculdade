#include<stdio.h>
#define TAM 30

void main(){

	int par[5] = {0}, impar[5] = {0};
	int nPar=0, nImpar=0;
	int num;

	for(int i=0;i<TAM;i++){
		printf("Informe a posicao %d: ", i);
		scanf("%d", &num);
		if(num%2 == 0){
			par[nPar] = num;
			nPar++;
			if(nPar > 4){
				nPar = 0;
				printf("Vetor Par Completo!\n");
				for(int j=0; j<5; j++){
					printf("%d ", par[j]);
				}
				printf("\n");
			}
		}else{
			impar[nImpar] = num;
			nImpar++;
			if(nImpar > 4){
				nImpar = 0;
				printf("Vetor Impar completo!\n");
				for(int j=0; j<5; j++){
					printf("%d ", impar[j]);
				}
				printf("\n");
			}
		}
	}

	printf("Vetores finais\n");
	printf("PAR\tIMPAR\n");
	for(int i=0; i<5; i++){
		printf("%d\t%d\n", par[i], impar[i]);
	}
}
