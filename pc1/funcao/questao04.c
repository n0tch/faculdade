/*
Faça uma função que recebe por parâmetro os valores necessário para o 
cálculo da fórmula de báskara e retorna, também por parâmetro, as suas raízes,
caso seja possível calcular.
*/

#include<stdio.h>
#include<math.h>

int bhaskara(float a, float b, float c, float *p1, float *p2){

	int flg=0;
	float delta = pow(b,2) - (4*a*c);
	printf("Delta: %.2f\n", delta);
	if(delta>=0){
		*p1 = (-b + sqrt(delta))/(2*a);
		*p2 = (-b - sqrt(delta))/(2*a);
		flg = 1;//tem raiz
	}else{
		flg = 0;
	}

	return flg;
}

int main(){

	float x1,x2;
	float a,b,c;
	printf("Informe o primeiro coeficiente: ");
	scanf("%f", &a);
	printf("Informe o segundo coeficiente: ");
	scanf("%f", &b);
	printf("Informe o terceiro coeficiente: ");
	scanf("%f", &c);

	if(bhaskara(a,b,c, &x1, &x2))
		printf("Raizes: %.2f e %.2f\n", x1,x2);
	else
		printf("Sem solucao!\n");
	return 0;
}
