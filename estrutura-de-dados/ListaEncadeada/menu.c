#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bibLista.h"

void menu(Celula* cel, int op){
    switch(op){
        case 1:
            inserir_final(cel, entrar_dados());
            //gets();
            break;
        case 2:
            insere_ordenado(cel, entrar_dados());
            break;
        case 3:
            imprimi_lista(cel);
            getchar();
            break;
        case 4:
            lista_vazia(cel) ? printf("A lista esta vazia!\n") : printf("A lista nao esta vazia!\n");
            getchar();
            break;
        case 5:
            busca_elemento(cel, entrar_dados());
            break;
        case 6:
            excluir_elemento(cel, entrar_dados());
            break;
        case 7:
            exclui_lista(cel);
            break;
        case 8:
            //exclui_lista(cel);
            break;
    }
}

int entrar_dados(){
    int op;
    printf("Informe o elemento: ");
    scanf("%d", &op);
    return op;
}
