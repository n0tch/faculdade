//Biblioteca BibConjunto
//

//TDA para o conjunto
typedef struct {
    int tam;
    int conj[20];
}TConjunto;

//cria o conjunto, setando seu tamanho inicial em 0
void criaConjunto(TConjunto *conjunto);

//adiciona elementos no conjunto
void inserirElemento(TConjunto *conjunto, int n);

//imprime os dados do conjunto
void imprimiConjunto(TConjunto *conjunto);

//faz a unicao entre o conjunto c1 e c2 e armazena em c3
void uniaoConjunto(TConjunto *c1, TConjunto *c2, TConjunto *c3);

//recebe um conjunto, seu indice maximo daquela iteracao e o elemento
//retorna 1 se nao houver elemento repedito, 0 se houver
//1 -> nao existe elemento repetido
//0 -> existe elemento repetido
int elementoRepetido(TConjunto *conjunto, int tam, int elemento);

//faz a intersecao entre o conjunto c1 e c2 e armazena em c3
void intersecaoConjunto(TConjunto *c1, TConjunto *c2, TConjunto *c3);

//recebe dois conjuntos e retona 1 se forem iguais e 0 caso contrario
int conjuntoIgual(TConjunto *c1, TConjunto *c2);
