/*
13. Faça uma função que recebe 3
 valores inteiros por parâmetro e
retorna-os ordenados em ordem crescente
*/

#include <stdio.h>
#include <stdlib.h>

void ordena(int *pa, int *pb, int *pc){
    int aux;
    if(*pb < *pa){
        aux = *pa;
        *pa = *pb;
        *pb = aux;
    }
    if(*pb > *pc){
        aux = *pc;
        *pc = *pb;
        *pb = aux;
    }
    if(*pb < *pa){
        aux = *pa;
        *pa = *pb;
        *pb = aux;
    }
}

int main()
{
    int nums[3];

    printf("Informe a: ");
    scanf("%d", &nums[0]);
    printf("Informe b: ");
    scanf("%d", &nums[1]);
    printf("Informe c: ");
    scanf("%d", &nums[2]);

    ordena(&nums[0],&nums[1],&nums[2]);
    printf("%d %d %d", nums[0], nums[1], nums[2]);
    return 0;
}
