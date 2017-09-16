/*
* crie 10 threads para preencher um vetor com numeros pares. A primeira posicao do vetor é um numero aleatorio par qualquer.
* a posicao i do vetor deverá conter um numero que seja a propria posicao [i-1] + 2.
*/

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define MAX_ALEAT 11

int vet[TAM],vet_id[TAM],i=0;
//criacao do mutex
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

void insert_value(int valor, int ident, int especial){
	//verificacao para assegurar que o dado adicionado no vetor
	//esteja nas especificacoes do enunciado.
	if((i != 0 && (vet[i-1]+2) == valor) || (i == 0) || (especial)){
		//tranco o mutex nesta regiao critica
		pthread_mutex_lock(&mutex);
		vet[i] = valor;
		vet_id[i] = ident;
		i++;
		//destranco o mutex
		pthread_mutex_unlock(&mutex);
		//caso nao adicione este print, a primeira thread ira conseguir preencher o vetor todo sozinho.
		printf(" ");
	}
}

void *hello(void *tid){
	int num = rand() % MAX_ALEAT;
	int id = *((int *)tid);
	
	do{
		if( (i == 0 && num % 2 == 0) || ( num % 2 == 0 && (num == vet[i-1]+2)) ){
			printf(" ");
			insert_value(num, id,0);
		}

		if(vet[i-1] == MAX_ALEAT-1){
			insert_value(0,id,1);
			printf(" ");
		}

		num = rand() % MAX_ALEAT;
	}while(i<TAM);

	pthread_exit(NULL);
}

int main(){
	srand(time(NULL));
	int i,err;
	pthread_t thread;

	for(i=0;i<TAM;i++){
		int *arg = malloc(sizeof(*arg));
		*arg = i;
		err = pthread_create(&thread, NULL, hello,arg);
		
		if(err != 0){
			exit(-1);
		}
	}

	printf("\n");
	pthread_mutex_lock(&mutex);
	for(i=0;i<TAM;i++){
		printf("[%*d]",2,vet[i]);
	}

	printf("\n");
	for(i=0;i<TAM;i++){
		printf("[%*d]",2, vet_id[i]);
	}
	pthread_mutex_unlock(&mutex);
	printf("\n");
	return 0;
}
