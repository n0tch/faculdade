#include <stdio.h>
#include <stdlib.h>
#include "bib.h"

int main()
{
    LISTA* lista1 = (LISTA*) malloc(sizeof(LISTA));
    LISTA* lista2 = (LISTA*) malloc(sizeof(LISTA));

    //alimentando lista 1
    add_elemento_final(lista1,3);
    add_elemento_final(lista1,1);
    add_elemento_final(lista1,1);
    add_elemento_final(lista1,1);
    add_elemento_final(lista1,6);


    //alimentando lista 2
    add_elemento_final(lista2,3);
    add_elemento_final(lista2,1);
    add_elemento_final(lista2,1);
    add_elemento_final(lista2,1);

    lista_igual(lista1, lista2) ? printf("Lista 1 igual a lista 2\n") : printf("Lista 1 diferente da lista 2\n");
    lista_igual(lista1, lista1) ? printf("Lista 1 igual a lista 1\n") : printf("Lista 1 diferente da lista 1\n");

    return 0;
}
