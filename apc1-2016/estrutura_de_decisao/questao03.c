/*
Faça um programa que leia um número real x e calcule o valor de:
         _
f(x) = \/x+(x/2) + x^x

(pesquise sobre as funções sqrt e pow)

*/

#include<stdio.h>
#include<math.h>

//para compilar é necessário a inclusao da opção '-lm' para que a 
//biblioteca math.h seja incluida.

void main(){
	float x;
	printf("Informe o valor de X: ");
	scanf("%f", &x);

	x = (sqrt(x)) + (x/2) + (pow(x,x));

	printf("O valor de X na funcao eh: %.2f\n", x);
}
