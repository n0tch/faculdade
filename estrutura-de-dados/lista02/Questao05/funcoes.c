#include <stdio.h>
#include <stdlib.h>
#include "bib.h"

void imprimir(){
    printf("Ola mundo!\n");
}

void preencher_lista(LISTA* lista){
    int op, i=0, num;
    do{
        printf("Informe o elemento %d: ",i);
        scanf("%d", &num);
        add_elemento_final(lista, num);
        printf("Adicionar outro elemento? (1 - sim / 2 - nao): ");
        scanf("%d", &op);
        i++;
    }while(op != 2);
}

void add_elemento_final(LISTA* lista, int n){
    LISTA* atual = lista;
    LISTA* novo = (LISTA*) malloc(sizeof(LISTA));

    novo->vlr = n;
    novo->prox = NULL;

    if(atual == NULL){
        atual->prox = novo;
    }else{
        while(atual->prox != NULL){
            atual = atual->prox;
        }

        atual->prox = novo;
    }
}

int qnt_elementos(LISTA* lista){
    LISTA* tmp = lista->prox;
    int qnt=0;
    while(tmp != NULL){
        qnt++;
        tmp = tmp->prox;
    }
    return qnt;
}
