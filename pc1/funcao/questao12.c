/*
Faça uma função que recebe a média final de um aluno por parâmetro e retorna o seu conceito,
conforme a tabela abaixo
*/

#include<stdio.h>

int conceito(float media){

	int n;

	if(media >= 0 && media <= 4.9){
		n = 1;
	}else if(media >= 5 && media <= 6.9){
		n = 2;
	}else if(media >= 7 && media <= 8.9){
		n = 3;
	}else if(media >= 9 && media <= 10){
		n = 4;
	}else{
		n = 5;
	}
	return n;
}

int main(){

	float media;
	printf("Informe a media final do aluno: ");
	scanf("%f", &media);

	switch(conceito(media)){
		case 1:
			printf("Conceito D\n");
			break;
		case 2:
			printf("Conceito C\n");
			break;
		case 3:
			printf("Conceito B\n");
			break;
		case 4:
			printf("Conceito A\n");
			break;
		case 5:
			printf("O valor informado esta fora do intervalo![0 a 10]\n");
			break;
	}

	return 0;
}
