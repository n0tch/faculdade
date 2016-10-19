/*
Faça uma função que verifique se um valor é perfeito ou não. Um valor é dito perfeito 
quando ele é igual
a soma dos seus divisores excetuando ele próprio. (Ex: 6 é perfeito, 6 = 1 + 2 + 3, que são seus divisores).
A função deve retornar um valor que represente booleano.
*/

#include<stdio.h>

int num_perfeito(int num){

	int i, sum=0, flg=0;
	for(i=1; i<=num;i++){
		if(num%i == 0){
			sum+=i;
			printf("num: %d\tsoma: %d\n", i,sum);
		}
		if(sum == num){
			flg = 1;
			break;
		}
	}
	return flg;
}

int main(){

	int vlr;
	printf("Informe um valor: ");
	scanf("%d", &vlr);
	printf("Numero %d eh perfeito: %d\n", vlr, num_perfeito(vlr));
	return 0;
}
