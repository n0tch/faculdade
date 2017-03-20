#include <stdio.h>
#include <stdlib.h>
#include "BibConjunto.h"

void criaConjunto(TConjunto *conjunto){
    conjunto->tam = 0;
    printf("Conjunto iniciado com sucesso!\n");
}

void inserirElemento(TConjunto *conjunto, int elemento){
    //conjunto na posicao tamanho recebe o elemento vindo do main
    conjunto->conj[conjunto->tam] = elemento;
    //incremento o tamanho do conjunto em 1
    conjunto->tam++;
}

void imprimiConjunto(TConjunto *conjunto){
    int i;
    printf("Elementos do conjunto\n");
    for(i=0;i<conjunto->tam;i++){
        printf("%d\t", conjunto->conj[i]);
    }
    printf("\n");
}

void uniaoConjunto(TConjunto *c1, TConjunto *c2, TConjunto *c3){
    //if((c1->tam + c2->tam) > 20){
    //    printf("Impossivel criar unicao entre conjuntos!\nTamanho maximo excedido!\n");
    //}else{
        printf(">>>>>%d\n", (c1->tam + c2->tam) );
        int i;
        for(i=0;i<(c1->tam);i++){
            //verifico se o elemento de c1 ja esta em c3
            //caso esteja nao o armazeno em c3, pois nao quero elementos repetidos na uniao
            if(elementoRepetido(c3, c3->tam, c1->conj[i])){
                inserirElemento(c3, c1->conj[i]);
            }
        }

        for(i=0;i<(c2->tam);i++){
            //verifico se o elemento de c1 ja esta em c2
            //caso esteja nao o armazeno em c2, pois nao quero elementos repetidos na uniao
            if(elementoRepetido(c3, c3->tam, c2->conj[i])){
                inserirElemento(c3, c2->conj[i]);
            }
        }
    //}
}

void intersecaoConjunto(TConjunto *c1, TConjunto *c2, TConjunto *c3){
    int i;
    for(i=0;i<(c1->tam);i++){
        if(elementoRepetido(c2, c2->tam, c1->conj[i]) == 0){
        //if para saber se existe elemento repetido, caso exista esse elemento esta na intersecao
            if(elementoRepetido(c3, c3->tam, c1->conj[i])){
            //if para saber se o elemento ja existe no conjunto destino
                if(c3->tam <20){
                    inserirElemento(c3, c1->conj[i]);
                }else{
                    printf("|Interseção| -> Tamanho maximo excedido!\n");
                }
            }
        }
    }
}

int elementoRepetido(TConjunto *conjunto, int tam, int elemento){
    int i, flg = 1;
    for(i=0;i<tam;i++){
        //percorro todos os elemento do conjunto passado
        //verifico se existe outro elemento igual a ele
        if(conjunto->conj[i] == elemento){
            flg = 0;
            break;
        }
    }

    return flg;
}

int conjuntoIgual(TConjunto *c1, TConjunto *c2){
    int i, flg = 1, count =0;
    if(c1->tam != c2->tam){
    //caso o tamanho do conjunto seja diferente o conjunto é diferente
        flg = 0;
    }else{
    //caso o tamanho do conjunto nao seja diferente, existe uma possibilidade
    //dos conjuntos serem iguais
        for(i=0;i<c1->tam;i++){
            if(elementoRepetido(c2, c1->tam, c1->conj[i]) == 0){
            //verifica se cada elemento de c1 possue um correspondente semelhante em c2
            //e incrementa count se houver
                count++;
            }
        }
    }
    //caso o count tenha um valor diferente do tamanho do conjunto
    //os conjuntos sao diferentes
    if(count != c1->tam){
        flg =0;
    }
    return flg;
}
