#include <stdio.h>
#include <stdlib.h>
#include "cabecalho.h"

int main()
{
    LISTA* lista = (LISTA*) malloc(sizeof(LISTA));
    lista->prox = NULL;
    int tam;
    preencher_lista(lista, &tam);
    int vet[tam];

    lista_para_vetor(lista, vet, tam);
    printf("Impressao do vetor\n");
    imprimir_vetor(vet, tam);
    return 0;
}
