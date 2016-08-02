#include<stdio.h>
#define tamanho 10

void main(){
	int A[tamanho], B[tamanho];

	for(int i=0; i<tamanho; i++){
		printf("Informe o valor da posicao A[%d]: ",i+1);
		scanf("%d", &A[i]);
		B[i] = 1;
	}

	//comeco o i em 1 para que o fatorial de certo
	for(int i=1,fat=1; i<=tamanho;i++){
		if(A[i-1] > 0){
			for(int j=1; j<=i; j++){
				fat *= j;
			}

			printf("%d\n", fat);
			B[i-1] = fat;
			fat = 1;
		}else{
			B[i-1] = A[i-1];
		}
	}

	for(int i=0;i<tamanho; i++){
		printf("%d -> %d\n", A[i], B[i]);
	}
}
