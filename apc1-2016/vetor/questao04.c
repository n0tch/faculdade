#include<stdio.h>

void main(){
	int n[20], menor, pos;
	for(int i=0;i<20;i++){
		printf("Informe a posicao %d: ", i+1);
		scanf("%d", &n[i]);

		if(i==0){
			menor = n[i];
			pos = i;
		}else{
			if(menor > n[i]){
				menor = n[i];
				pos = i;
			}
		}
	}

	printf("O menor elemento de N eh: %d\n", menor);
	printf("E sua posicao dentro do vetor eh: %d\n", pos+1);
}
