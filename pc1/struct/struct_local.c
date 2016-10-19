#include <stdio.h>
#define TAM 2

typedef struct   // ------------------------------tipo de dados chamado TipoAluno
{
    int matricula;
    char nome[50];
    float nota1, nota2, media;
} TipoAluno;    //---------------------------------

void entrada(TipoAluno *ta);              // prototipo
void saida(TipoAluno *ta);               // prototipo
float media(float x, float y); // prototipo

int main()
{
	int i;
	TipoAluno aluno[TAM] ;  // variavel aluno que eh um vetor do tipo TipoAluno

	printf("Cadastro\n");
	for(i=0;i<TAM;i++){
		printf("--Aluno %d--\n", i+1);
		entrada(&aluno[i]);
	}

	printf("\nAlunos Cadastrados\n");
	for(i=0;i<TAM;i++){
		printf("--Aluno %d--\n", i+1);
		saida(&aluno[i]);
	}
	
	return 0;
}

void entrada(TipoAluno *ta){
	printf("Informe a matricula: ");
	scanf("%d",&ta->matricula);
	fflush(stdin);
	printf("Informe o nome: ");
	gets(ta->nome);
	printf("Informe a nota 1: ");
	scanf("%f", &ta->nota1);
	printf("Informe a nota 2: ");
	scanf("%f", &ta->nota2);

	ta->media = media(ta->nota1,ta->nota2);
}

void saida(TipoAluno *ta){
	printf("Matricula: %d\n", ta->matricula);
	printf("Nome: %s\n", ta->nome);
	printf("Nota 1: %.2f\nNota 2: %.2f\n", ta->nota1, ta->nota2);
	printf("Media: %.2f\n\n", ta->media);
}

float media(float x, float y){
	return (x+y)/2;
}