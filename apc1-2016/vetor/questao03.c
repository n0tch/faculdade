#include<stdio.h>

void main(){
	int n, imp=0, pr=0;//impar e par
	int par[5], impar[5];
	for(int i=0; i<30; i++){
		printf("Informe a posicao %d: ", i+1);
		scanf("%d", &n);
		if(n%2 == 0){
			par[pr] = n;
			++pr;
			if(pr > 4){
				pr = 0;
				printf("Tamanho Par excedido.\nPares do vetor: ");
				for(int j=0;j<5; j++){
					printf("%d ", par[j]);
				}
				printf("\n");
			}
		}else{
			impar[imp] = n;
			++imp;
			if(imp > 4){
				imp = 0;
				printf("Tamanho Impar excedido.\nImpares do vetor: ");
				for(int j=0;j<5;j++){
					printf("%d ", impar[j]);
				}
				printf("\n");
			}
		}
	}
}
