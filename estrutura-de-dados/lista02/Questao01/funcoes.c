#include <stdio.h>
#include <stdlib.h>
#include "cabecalho.h"

void vet_para_lista(LISTA* lista, int vet[], int n){
    LISTA* atual = lista;
    int i=0;

    while(i<n){
        LISTA* novo = (LISTA*) malloc(sizeof(LISTA));
        novo->vlr = vet[i];

        if((i+1) > n){
            atual->prox = NULL;
        }else{
            atual->prox = novo;
            atual = novo;
            i++;
        }
    }
}

void preencher_vetor(int *vet, int n){
    int i;
    for(i=0;i<n;i++){
        vet[i] = recebe_num(i);
    }
}

int recebe_num(int i){
    int n;
    printf("Informe a posicao %d: ",i);
    scanf("%d", &n);
    return n;
}

void imprimi_lista(LISTA* lista){
    LISTA* tmp = lista->prox;
    while(tmp != NULL){
        printf(">>%d\n",tmp->vlr);
        tmp = tmp->prox;
    }
}
