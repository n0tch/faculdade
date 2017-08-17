#ifdef _WIN32
   #define LIMPAR "cls"
#else
   #define LIMPAR "clear"
#endif

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <windows.h>

#define L 6
#define C 6

int gerar_aleatorio(char lugar);
void imprimir_comodo(int matrix[L][C], int sujeira[2][2], int carrinho[2]);
void status(int bateria, int limpo);

int main()
{
    srand(time(NULL));
    int i,j;
    int comodo[L][C] = {{1,1,1,1,1,1},
                    {1,0,0,0,0,1},
                    {1,0,0,0,0,1},
                    {1,0,0,0,0,1},
                    {1,0,0,0,0,1},
                    {1,1,1,1,1,1}};

    int carrinho[] = {1,1};
    int bateria = 22;
    int sujeira[2][2] = {{gerar_aleatorio('L'),gerar_aleatorio('C')}, {gerar_aleatorio('L'),gerar_aleatorio('C')}};
    int limpo=0;

    for(i=1;i<L-1;i++){
        for(j=1;j<C-1;j++){
            carrinho[0] = i;
            carrinho[1] = j;
            imprimir_comodo(comodo, sujeira, carrinho);

            if(sujeira[0][0] == carrinho[0] && sujeira[0][1] == carrinho[1]){
                printf("SUJEIRA ENCONTRADA!\n");
                printf("Limpando...\n");
                Sleep(2000);
                sujeira[0][0] = gerar_aleatorio('L');
                sujeira[0][1] = gerar_aleatorio('C');

                i = 1;
                j = 0;
            }

            printf("bateria: %d passos restantes.\n", bateria);
            bateria--;
            Sleep(1000);
            system(LIMPAR);
        }
    }

    return 0;
}

int gerar_aleatorio(char lugar){
    int r;
    if(lugar == 'L'){
        r = 1+rand()%(L-2);
    }else if(lugar == 'C'){
        r = 1+rand()%(C-2);
    }

    return r;
}

void imprimir_comodo(int mat[L][C], int sujeira[2][2], int carrinho[2]){

    int i,j;
    for(i=0;i<L;i++){
        for(j=0;j<C;j++){
            if(i == carrinho[0] && j == carrinho[1]){
                printf("%c ", 178);
            }else if( (i == sujeira[0][0] && j == sujeira[0][1]) ){
                printf("* ");
            }else if(mat[i][j] == 1){
                printf("0 ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
}

void status(int bateria, int limpo){
    printf("bateria: %d passos restantes.\nLimpo: %d\n", bateria,limpo);
}
