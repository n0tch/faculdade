struct lista{
    int vlr;
    struct lista *prox;
};

typedef struct lista LISTA;
void imprimir();
void preencher_lista(LISTA* lista);
void add_elemento_final(LISTA* lista, int n);
int qnt_elementos(LISTA* lista);
