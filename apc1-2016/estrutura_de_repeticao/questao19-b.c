#include<stdio.h>
#define tamanho 6

int vetor[tamanho];

void inicializa_vetor(){
	int par = 2, impar = 1;
	//for para inicializar os valores do array
	//seguindo a regra de par - impar ...
	for(int i=0; i<tamanho; i++){
		if(i%2==0){
			vetor[i] = par;
			par += 2;
		}else{
			vetor[i] = impar;
			impar += 2;
		}
	}
}

int max_valor_par(){
	int maior;
	for(int i=0; i<tamanho; i++){
		if(i==0){
			maior = vetor[i];
		}else if(vetor[i] > maior && vetor[i]%2 == 0){
			maior = vetor[i];
		}
	}

	return maior;
}

void ordenar(){
	int aux;
	//printf("Chamou!\n");
	for(int i=0; i<tamanho; i++){
		for(int j=0; j<tamanho; j++){
			if(vetor[i] < vetor[j]){
//				printf("Troca!\n");
				aux = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = aux;
			}
		}
	}
}
void main(){
	inicializa_vetor();

	for(int i=0;i<tamanho; i++){
		printf("%d ", vetor[i]);
	}
	printf("\n");
	//vou variando todos os pares possiveis.
	//somente os pares.
	//impares ficam fixos.
/*
	//printf("Variacao dos pares\n");
	//for do i: todos os possiveis valores
	//divisiveis 2, ate 60 sejam incluidos
	for(int i=0; i<27; i++){
		//for do j: todos as posicoes pares do vetor receberao
		//um incremento de 2
		for(int j=0; j<6;j++){
			if(j%2==0){
				vetor[j] += 2;
			}
		}

		for(int j=0; j<6; j++){
			if(j%2!=0){
				vetor[j] += 2;
			}
		}
		//for do k: para apresentacao do vetor.
		for(int k=0;k<6;k++){
			printf("%d ", vetor[k]);
		}
		printf("\n");
	}

*/
	inicializa_vetor();
	int max = max_valor_par();

	for(int i=0;i<60-max; i++){
		if(i==0){
			vetor[i] = max;
		}
		if(i%2==0){
			for(int j=0;j<tamanho;j++){
				if(j==0){
					vetor[j] += 2;
				}
			}
			ordenar();
			for(int k=0;k<tamanho;k++){
				printf("%d ", vetor[k]);
			}
			printf("\n");
		}
	}
	printf("Maior: %d\n", max_valor_par());
}
