#include<stdio.h>

void main(){
	int ano;
	printf("Informe o ano: ");
	scanf("%d", &ano);

	if((ano % 400) == 0){
		printf("Ano Bissextos.\n");
	}else if( ano % 4 == 0 && ano % 100 != 0){
		printf("Ano Bissexto.\n");
	}else{
		printf("Ano nao bissexto.\n");
	}
}
