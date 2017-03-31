#include <stdio.h>
#include <stdlib.h>
#include "bibLista.h"

void criar_lista(Celula* cel){
    cel->prox = NULL;
}

void inserir_final(Celula* cel, int info){
    Celula* novo = (Celula*) malloc(sizeof(Celula));
    Celula* tmp = cel;
    while(tmp->prox != NULL){
        tmp = tmp->prox;
    }

    novo->info = info;
    novo->prox = NULL;
    tmp->prox = novo;
}

void imprimi_lista(Celula* cel, int op){
    Celula *tmp = cel->prox;
    if(lista_vazia(cel)){
        printf("A lista esta vazia!\n");
    }else{
        if(op == 1){
            printf("info\tendereco do prox\n");
            while(tmp != NULL){
                printf("%d\t%d\n", tmp->info, &(tmp->prox));
                tmp = tmp->prox;
            }
            system("pause");
        }else{
            while(tmp != NULL){
                printf("%d", tmp->info);
                tmp->prox != NULL ? printf("->") : printf(".\n");
                tmp = tmp->prox;
            }
        }
    }
}

int lista_vazia(Celula* cel){
    return (cel->prox == NULL);
}

void busca_elemento(Celula* cel, int vlr){
    Celula* tmp = cel->prox;
    int vzs = 0;
    while(tmp != NULL){
        if(tmp->info == vlr){
            printf("Elemento %d encontrado na posicao de memoria %d!\n",vlr, &(tmp->info));
        }
        tmp = tmp->prox;
    }

    system("pause");
}

void excluir_elemento(Celula* cel, int vlr){
    Celula *tmp = cel;
    Celula *ant = NULL;
    while(tmp != NULL && tmp->info != vlr){
        ant = tmp;
        tmp = tmp->prox;
    }

    if(tmp == NULL){
        printf("Elemento nao encontrado!\n");
        return; //forco a saida do programa da funcao
    }
    if(ant == NULL){
        cel = tmp->prox;
    }else{
        ant->prox = tmp->prox;
    }
    free(tmp);
}

void exclui_lista(Celula* cel){
    Celula* atual = cel->prox;
    Celula* p;
    while(atual != NULL){
        p = atual->prox;
        free(atual);
        atual = p;
    }
    cel->prox = NULL;
}

void insere_ordenado(Celula* cel, int vlr){
    Celula *ant = NULL, *atual;
    atual = cel->prox;

    //printf("%d - %d\n", a);
    while(atual != NULL && ((atual->info) < vlr) ){
        ant = atual;
        atual = atual->prox;
    }

    Celula *novo = (Celula*) malloc(sizeof(Celula));
    novo-> info = vlr;

    if(ant == NULL){
        novo->prox = NULL;
        atual->prox = novo;
    }else{
        ant->prox = novo;
        novo->prox = atual;
    }
}
