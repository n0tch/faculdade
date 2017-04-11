struct lista{
    int vlr;
    struct lista *prox;
};

typedef struct lista LISTA;

void criar_lista(LISTA *lista);
int lista_vazia(LISTA* lista);
void imprimir_lista(LISTA *lista);
void inserir_final(LISTA *lista, int vlr);
int tamanho_lista(LISTA *lista);
LISTA* inverter_ordem(LISTA *lista);
