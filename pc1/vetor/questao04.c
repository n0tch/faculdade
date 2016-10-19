#include<stdio_ext.h>
#define TAM 20

void main(){

	char G[TAM], R[TAM];
	int acerto = 0,i,j;
	printf("---Informe o gabarito da prova---\n");
	for(int i=0; i<TAM; i++){
		printf("Questao %d: ", i+1);
		__fpurge(stdin);
		scanf("%c", &G[i]);
	}

	for(i=0;i<50; i++){
		printf("--Aluno %d--\n", i+1);
		acerto = 0;
		for(j=0; j<50; j++){
			printf("Questao %d: ", j+1);
			__fpurge(stdin);
			scanf("%c", &R[j]);
			if(R[j] == G[j]){
				printf("Acertou!\n");
				acerto++;
			}
		}
		if(acerto >= 6){
			printf("Aluno %d APROVADO com %d acertos!\n", i, acerto);
		}else{
			printf("Aluno %d REPROVADO com %d acertos!\n", i, acerto);
		}
	}
}
