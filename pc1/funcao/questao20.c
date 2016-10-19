/*
Faça uma função que recebe, por parâmetro, um valor N e calcula e escreve a tabuada de 1 até N
*/

#include<stdio.h>

void tabuada(int num){
	for(int i=1;i<=num; i++){
		printf("%d x %d = %d\n", i, num, i*num);
	}
}

int main(){

	int num;
	printf("Informe o numero a ser calculado: ");
	scanf("%d", &num);

	tabuada(num);
	return 0;
}
