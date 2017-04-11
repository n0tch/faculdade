struct lista {
    int vlr;
    struct lista *prox;
    struct lista *ant;
};

typedef struct lista LISTA;

void criar_lista(LISTA *lista);
void inserir_final(LISTA *lista, int vlr);
int lista_vazia(LISTA *lista);
void imprimir(LISTA *lista);
void trocar_celula(LISTA *lista, int pos);
