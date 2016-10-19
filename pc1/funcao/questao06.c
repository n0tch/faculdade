/*
Faça uma função que recebe a idade de uma pessoa em anos, 
meses e dias e retorna essa idade expressa em dias
*/

#include<stdio.h>

int calc_dias(int anos, int meses, int dias){
	return (anos*360) + (meses*30) + (dias);
}

int main(){

	int anos, meses, dias;
	printf("Informe sua idade em dias, meses e anos\n");
	printf("Anos: ");
	scanf("%d", &anos);

	printf("Meses: ");
	scanf("%d", &meses);

	printf("Dias: ");
	scanf("%d", &dias);

	printf("Voce possue %d dias de vida!\n", calc_dias(anos, meses,dias));
	return 0;
}
