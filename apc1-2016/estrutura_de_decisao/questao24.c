#include<stdio.h>

void main(){
	//calculo da pascoa por Gauss
	int ano;
	int a,b,c,d,e,m,n;//variaveis para calculo da pascoa
	int dia;
	printf("Informe o ano: ");
	scanf("%d", &ano);

	if(ano >= 1582 && ano <= 1699){m=22; n=2;}
	else if(ano >= 1700 && ano <= 1799){m=23; n=3;}
	else if(ano >= 1800 && ano <= 1899){m=23; n=4;}
	else if(ano >= 1900 && ano <= 1999){m=24; n=5;}
	else if(ano >= 2000 && ano <= 2099){m=24; n=5;}
	else if(ano >= 2100 && ano <= 2199){m=24; n=6;}
	else if(ano >= 2200 && ano <= 2299){m=25; n=0;}
	else if(ano >= 2300 && ano <= 2399){m=26; n=1;}
	else if(ano >= 2400 && ano <= 2499){m=25; n=1;}

	//funcoes para descobrir data da pascoa:
	a = ano % 19;
	b = ano % 4;
	c = ano % 7;
	d = (19*a + m) % 30;
	e = (2*b + 4*c + 6*d + n) % 7;

	dia = 22 + d + e;
	if(dia <= 31){
		printf("Pascoa: %d/03/%d\n", dia, ano);
	}else if(dia > 31){
		dia = d + e - 9;
		if(dia > 25){
			dia -= 7;
			printf("Pascoa: %d/04/%d\n",dia, ano);
		}else{
			printf("Pascoa: %d/04/%d\n", dia, ano);
		}
	}
}
