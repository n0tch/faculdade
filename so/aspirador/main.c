#ifdef _WIN32
   #define LIMPAR "cls"
   #include <windows.h>
   #define dormir(x)(Sleep(x*1000))
#else
   #define LIMPAR "clear"
   #include <unistd.h>
   #define dormir(x)(sleep(x))
#endif

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define L 6
#define C 6
#define BATERIA_FULL 16

int bateria = BATERIA_FULL;
int carrinho[] = {1,1};

int gerar_aleatorio(char lugar);
void imprimir_comodo(int comodo[L][C], int sujeira[2][2], int carrinho[2]);
void recarregar(int comodo[L][C], int sujeira[2][2], int i, int j);

int main()
{
    srand(time(NULL));
    int i,j,ida;
    int comodo[L][C] = {{1,1,1,1,1,1},
                    {1,0,0,0,0,1},
                    {1,0,0,0,0,1},
                    {1,0,0,0,0,1},
                    {1,0,0,0,0,1},
                    {1,1,1,1,1,1}};

    int sujeira[2][2] = {{gerar_aleatorio('L'),gerar_aleatorio('C')}, {gerar_aleatorio('L'),gerar_aleatorio('C')}};

    /*
    for(i=1;i<L-1;i++){
        for(j=1;j<C-1;j++){
            carrinho[0] = i;
            carrinho[1] = j;
            imprimir_comodo(comodo, sujeira, carrinho);

            if(sujeira[0][0] == carrinho[0] && sujeira[0][1] == carrinho[1]){
                printf("SUJEIRA ENCONTRADA!\n");
                printf("Limpando...\n");
                dormir(2);
                sujeira[0][0] = gerar_aleatorio('L');
                sujeira[0][1] = gerar_aleatorio('C');
            }

            printf("bateria: %d passos restantes.\n", bateria);
            bateria--;

            if(( (i+j) ) > bateria){
                dormir(1);
                recarregar(comodo, sujeira, i,j);
            }

            dormir(1);
            system(LIMPAR);
        }
    }
        */
        i=j=ida=1;
        //ida -> 1 -> ida
        //ida -> 0 -> volta
        while(1){

            while(1){
                if((j==C-1 && ida == 1) || j==0){//encontrou uma colina a direita(caso da ida) ou na esquerda(caso da volta)
                    break;
                }
                carrinho[0] = i;
                carrinho[1] = j;
                imprimir_comodo(comodo, sujeira, carrinho);

                if(sujeira[0][0] == carrinho[0] && sujeira[0][1] == carrinho[1]){
                    printf("SUJEIRA ENCONTRADA!\n");
                    printf("Limpando...\n");
                    dormir(2);
                    sujeira[0][0] = gerar_aleatorio('L');
                    sujeira[0][1] = gerar_aleatorio('C');
                }

                printf("bateria: %d passos restantes.\n", bateria);
                bateria--;

                if( (i+j) > bateria){
                    recarregar(comodo, sujeira, i,j);
                }

                dormir(1);
                system(LIMPAR);

                if(ida == 1){
                    j++;//se esta indo
                }else if(ida == 0){
                    j--;//se esta voltando
                }

                if(i==L-2 && j == C-2){
                    ida = 0;//chegou no final do comodo(ida)
                }else if(i==1 && j == 1){
                    ida = 1;//chegou no inicio do comodo(volta)
                }

            }

            if(ida){
                i++;//avanco para a prox linha
                j=1;//posiciono o carrinho na primeira casa
            }else{
                i--;//vou para a linha de cima
                j=C-2;//posiciono o carrinho na ultima casa
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

void recarregar(int comodo[L][C], int sujeira[2][2], int i, int j){
    int k;
    system(LIMPAR);
    bateria++;
    //IDA PARA A TOMADA
    //volto no x
    for(k=j-1;k>0;k--){
        imprimir_comodo(comodo, sujeira, carrinho);
        carrinho[1] = k;
        printf("bateria: %d passos restantes.\n%d:%d\n", bateria,i,j);
        printf(">>VOLTANDO PARA RECARREGAR<<\n");
        bateria--;
        dormir(1);
        system(LIMPAR);
    }
    //volto no y
    for(k=i-1;k>0;k--){
        imprimir_comodo(comodo, sujeira, carrinho);
        carrinho[0] = k;
        printf("bateria: %d passos restantes.\n%d:%d\n", bateria,i,j);
        printf(">>VOLTANDO PARA RECARREGAR<<\n");
        bateria--;
        dormir(1);
        system(LIMPAR);
    }

    imprimir_comodo(comodo, sujeira, carrinho);
    printf("RECARREGANDO BATERIA. AGUARDE!\n");
    bateria = BATERIA_FULL;
    dormir(2);
    system(LIMPAR);

    //VOLTA PARA A POSICAO DE ONDE PAROU
    //vou no y
    for(k=2;k<=j;k++){
        carrinho[0] = k;
        imprimir_comodo(comodo, sujeira, carrinho);
        printf("bateria: %d passos restantes.\n", bateria);
        printf("bateria: %d passos restantes.\n%d:%d\n", bateria,i,j);
        bateria--;
        dormir(1);
        system(LIMPAR);
    }

    //vou no x
    for(k=2;k<=i;k++){
        carrinho[1] = k;
        imprimir_comodo(comodo, sujeira, carrinho);
        printf("bateria: %d passos restantes.\n", bateria);
        printf("bateria: %d passos restantes.\n%d:%d\n", bateria,i,j);
        bateria--;
        if(k!=i){
            dormir(1);
            system(LIMPAR);
        }
    }
}
