/*
17. Faça uma função que leia um número
não determinado de valores positivos e
 retorna a média aritmética dos mesmos.
*/

#include <stdio.h>
#include <stdlib.h>

float media(){
    int i=1, flg=1, num;
    float media=0;

    while(flg){
        printf("Informe o numero %d: ", i);
        scanf("%d", &num);
        i++;
        media+=num;
        printf("Continuar?\n1 - Sim\n0 - Nao\n");
        scanf("%d", &flg);
        system("cls");
    }
    media /= (i-1);
    return media;
}
int main()
{
    printf("Media: %.2f\n", media());
    return 0;
}
