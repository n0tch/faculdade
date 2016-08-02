//6. Faça um programa que leia os valores correspondentes
//aos três lados a, b e c de um triângulo. O programa deve
//então calcular a área A do triângulo utilizando a fórmula de Heron:
//       ________________
// A = \/s(s-a)(s-b)(s-c)
//
// s = (a + b + c) / 2

#include<stdio.h>
#include<math.h>

void main(){
	float a,b,c, S, A;

	printf("Informe o lado A: ");
	scanf("%f", &a);
	printf("Informe o lado B: ");
	scanf("%f", &b);
	printf("Informe o lado C: ");
	scanf("%f", &c);

	S = (a+b+c)/2;
	A = sqrt(S*((S-a)*(S-b)*(S-c)));

	printf("A = %.2f\n", A);
}
