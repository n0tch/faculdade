/*
Faça uma função que recebe por parâmetro um valor 
inteiro e positivo e retorna o valor lógico Verdadeiro
caso o valor seja primo e Falso em caso contrário.
*/

#include<stdio.h>

int check_primo(int num){
	int div=0;
	for(int i=1;i<=num;i++)
		if(num%i == 0)
			div++;

	if(div == 2)
		return 1;
	else
		return 0;
}

int main(){

	int num;
	printf("Informe um numero inteiro e positivo: ");
	scanf("%d", &num);
	if(num > 0){
		printf("Valor logico: %d\n", check_primo(num));
	}else{
		printf("Valor negativo! Informe um valor positivo!\n");
	}
	return 0;
}
