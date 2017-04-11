#include <stdio.h>
#include <stdlib.h>
#include "bib.h"

int main()
{
    LISTA *lista = (LISTA*)malloc(sizeof(LISTA));
    preencher_lista(lista);
    printf("A lista possue %d elementos!\n", qnt_elementos(lista));
    return 0;
}
