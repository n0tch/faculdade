#include <stdio.h>
#include <stdlib.h>
#include "bib.h"

int main()
{
    LISTA *lista = (LISTA*) malloc(sizeof(LISTA));

    criar_lista(lista);

    inserir_final(lista, 1);
    inserir_final(lista, 2);
    inserir_final(lista, 3);
    inserir_final(lista, 4);

    printf("Lista original\n");
    imprimir_lista(lista);

    lista = inverter_ordem(lista);

    printf("\n\nLista invertida\n");
    imprimir_lista(lista);
    return 0;
}
