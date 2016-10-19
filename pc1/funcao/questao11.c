/*
Faça uma função que recebe, por parâmetro, a altura (alt) e o sexo de uma pessoa e retorna o seu
peso ideal. Para homens, calcular o peso ideal usando a fórmula peso ideal = 72.7 x alt - 58 e, para
mulheres, peso ideal = 62.1 x alt - 44.7.
*/

#include<stdio.h>

float peso_ideal(float alt, char sexo){

	float peso;
	if(sexo == 'H')
		peso = (72.7*alt) - 58;
	else if(sexo == 'M')
		peso = (62.1*alt) - 44.7;

	return peso;
}

int main(){

	float alt;
	char sexo;

	printf("Informe sua altura: ");
	scanf("%f", &alt);
	printf("Informe seu sexo(H ou M): ");
	fflush(stdin);
	sexo = getchar();

	printf("Peso ideal: %.2f\n", peso_ideal(alt, sexo));
	return 0;
}
