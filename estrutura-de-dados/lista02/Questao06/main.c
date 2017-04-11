#include <stdio.h>
#include <stdlib.h>
#include "bib.h"

int main()
{
    LISTA *lista = (LISTA*) malloc(sizeof(LISTA));

    criar_lista(lista);

    //printf(">>>%d\n", lista_vazia(lista));

    inserir_final(lista, 1);
    inserir_final(lista, 2);
    inserir_final(lista, 3);
    inserir_final(lista, 4);
    inserir_final(lista, 5);
    imprimir(lista);

    trocar_celula(lista, 2);
    return 0;
}
