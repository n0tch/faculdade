#include<stdio.h>
#include<math.h>

void main(){
	int n, final=0, vzs=0;
	printf("Informe o numero a ser convertido: ");
	scanf("%d", &n);

	for(int cont=n;cont>0;vzs++){
		cont/=2;//for para descobrir tamanho do
	}//numero em binario

	int bin[vzs];
	for(int i=vzs-1; i>=0; i--){
		bin[i] = n%2;//armazanar o bin de tras para frente
		n/=2;
	}

	for(int i=0;i<vzs;i++){
		if(bin[i]==1){
			final += pow(10,(vzs-1)-i);//elevo 10 a ao (tamanho do vetor - 1) - posicao atual do vet
		}
	}
	printf("%d\n", final);
}
