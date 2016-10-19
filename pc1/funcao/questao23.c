/*
Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o valor de S.
S = 1 + 1/1! + 1/2! + 1/3! + 1/N!
*/
#include<stdio.h>

int fatorial(int n){
	if(n<1){
		return 1;
	}else{
		return n*fatorial(n-1);
	}
}

double S(int x){

	double r=0;
	for(float i=0; i<=x; i++){
		r += (float)1/(fatorial(i));
	}
	return r;
}

int main(){

	int num;
	printf("Informe o numero inteiro positivo: ");
	scanf("%d", &num);
	printf("S = %.10lf\n", S(num));
	return 0;
}
