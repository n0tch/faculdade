#include <stdio.h>
#include <stdlib.h>
#include "bib.h"

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

int lista_igual(LISTA* lista1, LISTA* lista2){
    LISTA* tmp1 = lista1;
    LISTA* tmp2 = lista2;
    int flg = 1;

    if(msm_tamanho(lista1,lista2)){
        while(tmp1 != NULL && tmp2 != NULL){
            if(!(tmp1->vlr == tmp2->vlr) && !(tmp1->prox == tmp2->prox)){
                //printf("%d\n", &tmp1->prox);
                //printf("Iguais!\n");
                flg = 0;
                break;
            }
            tmp1 = tmp1->prox;
            tmp2 = tmp2->prox;
        }
    }else{
        flg = 0;
    }

    return flg;
}

int msm_tamanho(LISTA* lista1, LISTA* lista2){
    LISTA* tmp1 = lista1;
    LISTA* tmp2 = lista2;
    int tm_l1 = 0;
    int tm_l2 = 0;

    while(tmp1 != NULL){
        tm_l1++;
        tmp1=tmp1->prox;
    }

    while(tmp2 != NULL){
        tm_l2++;
        tmp2=tmp2->prox;
    }

    if(tm_l1 == tm_l2){
        return 1;
    }else{
        return 0;
    }
}
