/*9. Escreva uma função que recebe,
por parâmetro, um valor inteiro e
positivo e retorna o somatório desse
valor.*/

#include <stdio.h>
#include <stdlib.h>

int somatorio(int num){
    int i=0, soma=0;
    while(i<=num){
        soma+=i;
        i++;
    }
    return soma;
}

int main()
{
    int num;
    printf("Informe um numero positivo inteiro: ");
    scanf("%d", &num);
    if(num <= 0){
        printf("Informe um numero inteiro e posivivo!\n");
    }else{
        printf("Somatorio: %d\n", somatorio(num));
    }
    return 0;
}
