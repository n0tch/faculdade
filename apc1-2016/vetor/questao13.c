#include<stdio_ext.h>
#define tamanhoG 20

void main(){
	int acertos=0;
	char G[tamanhoG], R[tamanhoG];
	for(int i=0; i<tamanhoG;i++){
		printf("Informe a letra da questao %d: ", i+1);
		scanf("%c", &G[i]);
		__fpurge(stdin);
	}

	for(int i=0; i<50; i++){
		printf("----ALUNO %d----\n", i+1);
		for(int j=0; j<tamanhoG;j++){
			printf("Questao %d: ", j+1);
			scanf("%c", &R[j]);
			__fpurge(stdin);
			if(R[j] == G[j]){
				acertos++;
			}
		}
		printf("Acertos: %d\n", acertos);
		if(acertos>=12){
			printf("APROVADO.\n");
		}else{
			printf("REPROVADO!\n");
		}
		acertos = 0;
	}
}
