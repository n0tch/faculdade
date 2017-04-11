#include <stdio.h>
#include <stdlib.h>
#include "cabecalho.h"

int main()
{
    LISTA* lista = (LISTA*) malloc(sizeof(LISTA));
    int n;
    printf("Informe o tamanho do vetor ( >=1 ): ");
    scanf("%d", &n);

    if(n>=1){
        int vet[n];
        int *p = vet;
        //passo a variavel 'p' que é um ponteiro pro endereco do vetor vet
        //e preencho o vetor vet atraves do ponteiro p
        preencher_vetor(p, n);
        vet_para_lista(lista, vet,n);
        imprimi_lista(lista);
    }else{
        printf("Tamanho do vetor informado nao permitido.\n");
    }
    return 0;
}
