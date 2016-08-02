#include<stdio_ext.h>

void main(){
	int idd, contrib;
	char sexo;

	printf("Informe seu sexo('m' ou 'f'): ");
	scanf("%c", &sexo);

	printf("Informe sua idade: ");
	scanf("%d", &idd);

    printf("Informe o tempo de contribuicao: ");
    scanf("%d", &contrib);

	if(sexo == 'm'){
		if(idd >= 65 && contrib >= 10){
			printf("Pode aposentar!\n");
		}else if(idd >= 63 && contrib >= 15){
			printf("Pode aposentar!\n");
		}else{
			printf("Nao pode aposentar!\n");
		}
	}else if(sexo == 'f'){
		if(idd >= 63 && contrib >= 10){
			printf("Pode aposentar!\n");
		}else if(idd >= 61 && contrib >= 15){
			printf("Pode aposentar!\n");
		}else{
			printf("Nao pode aposentar!\n");
		}
	}else{
		printf("Reveja os parametros informados.\n");
	}
}
