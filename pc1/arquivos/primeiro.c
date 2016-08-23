#include<stdio.h>

void main(){
	FILE *arquivo;
	arquivo = fopen("arquivo.txt", "w");
	fprintf(arquivo, "Ola Mundo!\nLOL");
	fclose(arquivo);
}
