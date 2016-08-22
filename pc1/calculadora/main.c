#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float soma(float a, float b){
    return a+b;
}

float sub(float a, float b){
    return a-b;
}

float mult(float a, float b){
    return a*b;
}

float razao(float a, float b){
    return a/b;
}

float pot(float exp, float num){
    int i;
    float r=1;
    for(i=0;i<exp;i++)
        r *= num;
        printf("%f\n", r);
    return r;
}

float raiz(float a){
    return sqrt(a);
}

float input(){
    float vlr;
    printf("Informe o valor: ");
    scanf("%f", &vlr);
    return vlr;
}

void output(char texto[], float valor){
    printf("%s %.2f\n", texto, valor);
}

void menu(){
    printf("-------Calc 0.0001-------\n");
    printf("| + para soma\t\t|\n");
    printf("| - para subtracao\t|\n");
    printf("| * para multiplicacao\t|\n");
    printf("| / para divisao\t|\n");
    printf("| P para potencia\t|\n");
    printf("| R para Raiz Quadrada\t|\n");
    printf("-------------------------\n");
    printf("Informe a operacao: ");
}
int main()
{
    char op;

    menu();
    op = getchar();

    switch(op){
        case '+':
            printf("Soma!\n");
            output("A soma eh:", soma(input(),input()));
            break;
        case '-':
            printf("Subtracao!\n");
            output("A subtracao eh:", sub(input(),input()));
            break;
        case '*':
            printf("Multiplicacao!\n");
            output("A multiplicacao eh:", mult(input(),input()));
            break;
        case '/':
            printf("Divisao!\n");
            output("A divisao eh:", razao(input(),input()));
            break;
        case 'P':
            printf("Potencia!\n");
            output("A potencia eh: ", pot(input(), input()));
            break;
        case 'R':
            printf("Raiz Quadrada!\n");
            output("A raiz eh: ", raiz(input()));
            break;
        default:
            printf("Opcao Invalida!\n");
    }

    return 0;
}
