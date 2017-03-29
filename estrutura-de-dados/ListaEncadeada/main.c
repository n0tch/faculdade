#include <stdio.h>
#include <stdlib.h>
#include "bibLista.h"

int main()
{
    int op;
    Celula* cel = (Celula*) malloc(sizeof(Celula));
    criar_lista(cel);

    do{
        if(!lista_vazia(cel)){
            printf("Lista atual: ");
            imprimi_lista(cel);
            printf("\n");
        }

        printf("1 - Inserir no final\n");
        printf("2 - Inserir Ordenado\n");
        printf("3 - Imprimir lista\n");
        printf("4 - Testa se lista esta vazia\n");
        printf("5 - Buscar elemento\n");
        printf("6 - Excluir elemento\n");
        printf("7 - Excluir Lista\n");
        printf("8 - Sair\n");
        scanf("%d", &op);
        menu(cel, op);
        system("clear");
    }while(op != 8);
    return 0;
}
