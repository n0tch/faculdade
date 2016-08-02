//7. Faça um programa que lê o raio de um disco e imprime sua área e seu perímetro.

#include<stdio.h>
#include<math.h>

void main(){
	float raio, area, perimetro;
	printf("Informe o raio: ");
	scanf("%f", &raio);

	perimetro = (2*3.141592)*raio;
	area = 3.141592 * pow(raio, 2);
	printf("Perimetro dessa circunferencia: %.2f\n", perimetro);
	printf("Area dessa circunferencia: %.2f\n", area);
}
