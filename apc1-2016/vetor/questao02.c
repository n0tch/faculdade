#include<stdio.h>

void main(){
	int n, vzsMaior;
	printf("Informe quantas posicoes deseja digitar: ");
	scanf("%d",&n);
	float array[n], media=0, maior=0, menor=0;

	for(int i=0;i<n;i++){
		printf("Informe a posicao %d: ",i);
		scanf("%f", &array[i]);
		if(i==0){//primeira vez coloco o maior e o menor
			maior = array[i];//como o primeiro numero digitado.
			menor = array[i];
		}
		if(maior < array[i]){
			maior = array[i];
		}
		if(menor > array[i]){
			menor = array[i];
		}
		media+=array[i];//acumulacao da variavel media.
	}

	media /= n;

	for(int i=0; i<n; i++){//for para descobrir numeros maiores do que a media
		if(array[i] >= media){
			vzsMaior++;
		}
	}

	printf("Maior: %.2f\nMenor: %.2f\n", maior, menor);
	printf("Media: %.2f\n", media);
	printf("Numeros maiores ou iguais a media: %d\n", vzsMaior);
}
