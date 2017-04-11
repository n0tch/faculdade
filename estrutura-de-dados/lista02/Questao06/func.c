#include <stdio.h>
#include <stdlib.h>
#include "bib.h"

void criar_lista(LISTA *lista){
    lista= NULL;
}

int lista_vazia(LISTA *lista){
    return (lista->prox == NULL);
}

void inserir_final(LISTA *lista, int vlr){
    LISTA *tmp = lista;
    LISTA *novo = (LISTA*) malloc(sizeof(LISTA));

    novo->prox = NULL;
    novo->vlr = vlr;

    if(lista_vazia(lista)){
        lista->prox = novo;
    }else{
        while(tmp->prox != NULL){
            tmp = tmp->prox;
        }
        tmp->prox = novo;
        novo->ant = tmp;
    }

}

void trocar_celula(LISTA *lista, int pos){
    LISTA *tmp = lista;
    int i=0;

    while(i<pos){
        tmp = tmp->prox;
        i++;
    }


    tmp->prox = tmp->ant;
    tmp->ant = tmp->prox;

    //printf("Item: %d\n", tmp->vlr);

}

void imprimir(LISTA *lista){
    LISTA *tmp = lista->prox;
    while(tmp != NULL){
        printf(">>>%d\n", tmp->vlr);
        tmp = tmp->prox;
    }
}
