struct lista{
    int vlr;
    struct lista *prox;
};

typedef struct lista LISTA;
void add_elemento_final(LISTA* lista, int n);
int lista_igual(LISTA* lista1, LISTA* lista2);
int msm_tamanho(LISTA* lista1, LISTA* lista2);
