#include<stdio.h>
#define tamanho 20

void main(){
	char palavra[tamanho];
	printf("Informe UMA palavra de no max 20 caracteres: ");
	//faco isso para que o scanf leia mais de uma palavra na mesma string
	//pq normalmente ele so le ate o espaco.
	scanf("%[A-Za-z ]s", palavra);

	for(int i=0;palavra[i]!='\0';i++){
		//printf("%c-",palavra[i]);
		printf("%c", palavra[i]-32);
	}
	printf("\n");
}
