#include<stdio.h>

void main(){
	int dia, mes;
	int total_dia;

	printf("Informe o dia: ");
	scanf("%d", &dia);
	printf("Informe o mes: ");
	scanf("%d", &mes);

	if((dia <= 31) && (mes <= 12)){
		total_dia = (mes * 30) - (30 - dia);
		printf("Dias restantes para 1º de janeiro: %d\n", (365 - total_dia) + 1 );
		//incremento o resultado em 1 pois caso contrario seria o ultimo dia do ano e nao 1 de janeiro
	}else{
		printf("Dados invalidos.\nVerifique o dia e o mes informado.\n");
	}
}
