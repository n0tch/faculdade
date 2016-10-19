/*
Faça uma função que recebe, por parâmetro, um valor inteiro e positivo e retorna o número de divisores
desse valor.
*/

#include<stdio.h>

int divisores(int num){

	int divs = 0;
	for(int i=1; i<=num; i++){
		if(num%i == 0)
			divs++;
	}
	return divs;
}

int main(){

	int num;
	printf("Informe o numero a ser calculado: ");
	scanf("%d", &num);

	printf("O numero %d possue %d divisores!\n", num, divisores(num));
	return 0;
}
