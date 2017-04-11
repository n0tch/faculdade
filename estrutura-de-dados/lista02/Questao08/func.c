#include <stdio.h>
#include <stdlib.h>
#include "bib.h"

void criar_lista(LISTA *lista){
    lista = NULL;
}

int lista_vazia(LISTA *lista){
    return (lista == NULL);
}

void inserir_final(LISTA *lista, int vlr){

    LISTA *novo = (LISTA*) malloc(sizeof(LISTA));
    LISTA *tmp = lista;

    if(lista_vazia(lista)){
        lista = novo;
    }else{
        while(tmp->prox != NULL){
            tmp = tmp->prox;
        }
    }

    tmp->prox=novo;
    novo->vlr = vlr;
    novo->prox = NULL;
}

LISTA* inverter_ordem(LISTA *lista){
    LISTA *tmp, *ant, *prox;

    tmp = lista;
    ant = NULL;

    while(tmp != NULL){
        prox = tmp->prox;
        tmp->prox = ant;
        ant = tmp;
        tmp = prox;
    }
    return ant;
}

void imprimir_lista(LISTA *lista){
    LISTA *tmp = lista;
    while(tmp->prox != NULL){
        printf(">>%d\n", tmp->vlr);
        tmp = tmp->prox;
    }
}
