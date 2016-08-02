#include<stdio.h>

void main(){
	int nAtual,nAntigo, i=0, j=0;
	printf("Informe a quantidade de numeros a serem avaliadas: ");
	scanf("%d", &i);

	while(j<(i-1)){
		if(j==0){
			printf("Informe o numero 1: ");
			scanf("%d", &nAntigo);
		}

		printf("Digite o numero %d: ", j+2);
		scanf("%d", &nAtual);

		if(nAtual > nAntigo){
			printf("Em ordem.\n");
		}else{
			printf("Nao ordenado.\n");
		}

		nAntigo = nAtual;
		j++;
	}

}
