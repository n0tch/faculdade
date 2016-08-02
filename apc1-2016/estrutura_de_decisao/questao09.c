/*
9. Escreva um programa que lê um número inteiro do teclado e imprime "SIM"se o
número for par e maior do que 10, ou for ímpar e menor do que 50. Caso contrário o
programa deve imprimir "NAO".
*/

#include<stdio.h>

void main(){
	int num;

	printf("Informe um numero inteiro qualquer: ");
	scanf("%d", &num);

	if(((num % 2 == 0) && (num > 10)) || ((num % 2 != 0) && (num < 50))){
		printf("Sim.\n");
	}else{
		printf("Nao.");
	}
}
