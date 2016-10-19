/*
Faça uma função que receba um valor inteiro e positivo e calcula o seu fatorial.
*/

#include<stdio.h>

//fatorial calculado com funcao recursiva
//funcao recursiva foi vista na aula de arquitetura de computadores
//por isso tomei a liberdade de usa-la aqui!
int fatorial(int num){
	if(num<1){
		return 1;
	}else{
		return num*fatorial(num-1);
	}
}

int main(){

	int num;
	printf("Informe o numero a ser calculado: ");
	scanf("%d", &num);

	printf("O fatorial da %d eh %d!\n", num , fatorial(num));

	return 0;
}
