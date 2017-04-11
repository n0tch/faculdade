#include <stdio.h>
#include <stdlib.h>
#include "cabecalho.h"

void preencher_lista(LISTA* lista, int *tam){
    int op, i=0, num;
    do{
        printf("Informe o elemento %d: ",i);
        scanf("%d", &num);
        add_elemento_final(lista, num);
        printf("Adicionar outro elemento? (1 - sim / 2 - nao): ");
        scanf("%d", &op);
        i++;
    }while(op != 2);
    //passo para tamanho o tamanho total da lista
    *tam = i;
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

void lista_para_vetor(LISTA* lista, int *vet, int tam){
    LISTA* atual = lista->prox;
    int i=0;
    while(atual != NULL){
        vet[i] = atual->vlr;
        i++;
        atual = atual->prox;
    }
}

void imprimir_vetor(int vet[], int tam){
    int i;
    for(i=0;i<tam;i++){
        printf(">>%d\n", vet[i]);
    }
}
