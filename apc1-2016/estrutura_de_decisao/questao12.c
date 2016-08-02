#include<stdio.h>

void main(){
	char unidade;
	float temp;

	printf("Informe a unidade da temperatura('F' ou 'C'): ");
	scanf("%c", &unidade);

	if( unidade == 'F'){
		printf("Informe a temperatura em F: ");
		scanf("%f", &temp);
		temp = ((temp - 32) * ((float)5/9));
		printf("Celcius: %.2f\n", temp);
	}else if(unidade == 'C'){
		printf("Informe a temperatura em C: ");
		scanf("%f", &temp);
		temp = (((float)9/5)*temp)+32;
		printf("Fahrenheit: %.2f\n", temp);
	}else{
		printf("Valor informado nao corresponde!\n");
	}
}
