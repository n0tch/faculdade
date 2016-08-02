#include<stdio.h>
#include<string.h>
#define tamanho 20

void main(){
	char palavra[tamanho];

	printf("Informe a palavra de no maximo 20 caracteres: ");
	scanf("%s", palavra);

	int len = strlen(palavra);
	int flg = 1;
	for(int i=0; i<(int)(len/2); i++){
		if(palavra[i] != palavra[(len-1)-i]){
			flg = 0;
			break;
		}
	}

	if(flg == 1){
		printf("A palavra %s eh um palindromo!\n", palavra);
	}else{
		printf("A palavra %s nao eh um palindromo!\n", palavra);
	}
}
