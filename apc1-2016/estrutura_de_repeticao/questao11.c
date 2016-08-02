#include<stdio.h>

void main(){
	int n, ant=0;

	printf("Informe a qnt de numeros: ");
	scanf("%d", &n);
	int array[n];

	for(int i=0; i<n; i++){
		printf("Informe n %d: ", i+1);
		scanf("%d", &array[i]);
	}

	for(int i=0; i<=100; i+=25){
		for(int j=0; j<n; j++){
			if(array[j] > ant && array[j] < i){
				printf("%d entre %d e %d\n", array[j], ant, i);
			}
		}
		ant = i;
		//printf("%d\n",i);
	}
	//sizeof(vet) / sizeof(TIPO)//
}
