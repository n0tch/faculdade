/*
Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o valor de S
S = 1 + 1⁄2 + 1/3 + 1⁄4 + 1/5 + 1/N.
*/

#include<stdio.h>

double S(int x){

	double r=0;
	for(float i=1; i<=x; i++){
		r += (float)1/i;
	}

	return r;
}
int main(){

	int num;
	printf("Informe um numero inteiro positivo: ");
	scanf("%d", &num);

	printf("S = %lf\n", S(num));
	return 0;
}
