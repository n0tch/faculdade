/*
Faça uma função que recebe por parâmetro o raio de uma esfera e calcula o seu volume
*/

#include<stdio.h>
#include<math.h>

float calc_volume(float r){
	return (4*3.14159265*pow(r,3))/3;
}

int main(){
	float raio;
	printf("Informe o raio da esfera: ");
	scanf("%f", &raio);

	printf("O volume da esfera eh de: %.2f\n", calc_volume(raio));
	return 0;
}
