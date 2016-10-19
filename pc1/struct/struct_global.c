#include <stdio.h>
#include <stdlib.h>
#define TAM 30

typedef struct   // ------------------------------tipo de dados chamado TipoAluno
{
    int matricula;
    char nome[50];
    float nota1, nota2, media;
} TipoAluno;    //---------------------------------

void entrada(void);              // prototipo
void saida(void);               // prototipo
float media(float x, float y); // prototipo

TipoAluno aluno[TAM] ;  // variavel aluno que eh um vetor do tipo TipoAluno 

int main(){
	entrada();
	saida();
	return 0;
}

void entrada(void){
	int i;

	for(i=0;i<TAM;i++){
		printf("--Aluno %d--\n",i+1);
		printf("Informe a matricula: ");
		scanf("%d", &aluno[i].matricula);
		fflush(stdin);
		printf("Informe o nome: ");
		gets(aluno[i].nome);
		printf("Informe a nota 1: ");
		scanf("%f", &aluno[i].nota1);
		printf("Informe a nota 2: ");
		scanf("%f", &aluno[i].nota2);

		aluno[i].media = media(aluno[i].nota1, aluno[i].nota2);
	}

}

void saida(){
	int i;
	for(i=0;i<TAM;i++){
		printf("--Aluno %d--\n",i+1);
		printf("Nome: %s\n", aluno[i].nome);
		printf("Nota 1: %.2f\nNota 2: %.2f\n", aluno[i].nota1, aluno[i].nota2);
		printf("Media: %.2f\n\n",aluno[i].media);
	}
}

float media(float x, float y){
	return (x+y)/2;
}
