#include <stdio.h>
#include <stdlib.h>
#include "BibConjunto.h"

int main()
{
    TConjunto c1,c2,c3,c4;
    int i, n;

    criaConjunto(&c1);
    do{
        printf("--- Conjunto 1 ---\n");
        printf("Informe o elemento: ");
        scanf("%d", &n);
        inserirElemento(&c1, n);
        if(c1.tam <20){
            printf("Adicionar outro elemento(1 - s / 0 - n): ");
            scanf("%d", &i);
            system("cls");
        }else{
            printf("Tamanho maximo excedido!\n");
            break;
        }
    }while(i);

    imprimiConjunto(&c1);

    criaConjunto(&c2);

    do{
        printf("--- Conjunto 2 ---\n");
        printf("Informe o elemento: ");
        scanf("%d", &n);
        inserirElemento(&c2, n);
        if(c2.tam <20){
            printf("Adicionar outro elemento(1 - s / 0 - n): ");
            scanf("%d", &i);
            system("cls");
        }else{
            printf("Tamanho maximo excedido!\n");
            break;
        }
    }while(i);

    printf("Conjunto 1\n");
    imprimiConjunto(&c1);
    printf("Conjunto 2\n");
    imprimiConjunto(&c2);

    criaConjunto(&c3);
    uniaoConjunto(&c1,&c2,&c3);
    printf("Unicao entre c1 e c2 sendo armazenada em c3\n");
    imprimiConjunto(&c3);

    criaConjunto(&c4);
    intersecaoConjunto(&c1,&c2,&c4);
    printf("Intersecao entre c1 e c2 armazenada em c4\n");
    imprimiConjunto(&c4);

    if(conjuntoIgual(&c1,&c2)){
        printf("Conjuntos iguais!\n");
    }else{
        printf("Conjuntos diferentes");
    }
    return 0;
}

