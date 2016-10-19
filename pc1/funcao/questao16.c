#include<stdio.h>

void calc_habitante(float *mf,float *maiorS,float *mediaS,float *pp){
	float salario;
	int filho, flg;
	*pp = 0;

	for(int i=0;;i++){
		printf("Informe o numero de filhos: ");
		scanf("%d", &filho);
		*mf += filho;
		printf("Informe o salario: ");
		scanf("%f", &salario);
		*mediaS += salario;

		//assumo o primeiro valor como o maior valor
		if(i==0){
			*maiorS = salario;
		}else if(salario > *maiorS){
			*maiorS = salario;
		}

		//incremento a variavel de percentual de pessoas
		//que recebem ate 350
		if(salario <= 350){
			*pp += 1;
		}

		printf("Informar novo habitante?\n1 - Sim\n2 - Nao\n");
		scanf("%d", &flg);
		//caso saia do loop calculo:
		//mf -> media de filho
		//mediaS -> media de salario
		//pp -> percentual de pessoas
		if(flg == 2){
			*mf /= i;
			*mediaS /= i;
			*pp /= i;
			break;
		}
	}
}

void main(){

	float media_filho = 0, maior_salario = 0, media_salario = 0, perc_pessoas = 0;

	calc_habitante(&media_filho, &maior_salario, &media_salario, &perc_pessoas);
	printf("Media de filhos: %.2f\n", media_filho);
	printf("Maior salario: %.2f\n", maior_salario);
	printf("Media de salario: %.2f\n", media_salario);
	printf("Media de pessoas que ganham ate 350 R$: %.2f\n", perc_pessoas);
}
