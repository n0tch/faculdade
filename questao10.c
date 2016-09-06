/*
10. Faça uma função que recebe um valor inteiro
 e verifica se o valor é par ou ímpar. A função
deve retornar um valor que represente booleano.
*/

#include <stdio.h>
#include <stdlib.h>

int par(int num){
    int r;
    if(num % 2 == 0)
        r = 1;
    else
        r = 0;

    return r;
}

int impar(int num){
    int r;
    if(num % 2 != 0)
        r = 1;
    else
        r = 0;

    return r;
}

int main()
{
    int num;
    printf("Informe um valor inteiro: ");
    scanf("%d", &num);
    if(par(num)){
        printf("Numero par!\n");
    }else if(impar(num)){
        printf("Numero impar!\n");
    }else{
        printf("Erro!\n");
    }
    return 0;
}
