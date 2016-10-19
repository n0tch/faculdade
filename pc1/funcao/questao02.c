#include<stdio.h>

/*
Escreva uma função que recebe as 3 notas de um aluno por parâmetro e uma letra. 
Se a letra for A o procedimento calcula a média aritmética das notas do aluno, 
se for P, a sua média ponderada (pesos: 5, 3 e 2) e se for H, a sua média harmônica.
 A média calculada também deve retornar por parâmetro.
*/

float media(float n1, float n2, float n3, char op){

	float media;
	if(op == 'A'){
		media = (n1+n2+n3)/3;
	}else if(op == 'P'){
		media = (n1*5+n2*3+n3*2)/10;
	}else if(op == 'H'){
		media = 3/(1/n1 + 1/n2 + 1/n3);
	}
	return media;
}

int main(){

	char op;
	float n1,n2,n3;
	printf("---Media---\n");
	printf("A - Aritmetica\n");
	printf("P - Ponderada\n");
	printf("H - Harmonica\n");
	printf("Informe uma das operacoes acima: ");
	op = getchar();

	printf("Informe a nota 1: ");
	scanf("%f", &n1);
	printf("Informe a nota 2: ");
	scanf("%f", &n2);
	printf("Informe a nota 3: ");
	scanf("%f", &n3);

	printf("A media eh: %.2f\n",media(n1,n2,n3,op));
	return 0;
}
