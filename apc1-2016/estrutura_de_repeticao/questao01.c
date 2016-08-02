#include<stdio.h>

void main(){

	int opcao;

	do{
		printf("-------Cardapio-------\n");
		printf("1 - Prato 01\n");
		printf("2 - Prato 02\n");
		printf("3 - Prato 03\n");
		printf("4 - Prato 04\n");
		printf("5 - Sair\n");
		printf("Informe o numero do prato: ");
		scanf("%d", &opcao);

		switch(opcao){
			case 1:
				printf("Prato 01 escolhido!\n");
				break;
			case 2:
				printf("Prato 02 escolhido!\n");
				break;
			case 3:
				printf("Prato 03 escolhido!\n");
				break;
			case 4:
				printf("Prato 04 escolhido!\n");
				break;
			case 5:
				break;
			default:
				printf("Prato invalido!\n");
				break;
		}
	}while(opcao != 5);
}
