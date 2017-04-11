struct lista{
    int vlr;
    struct lista *prox;
};

typedef struct lista LISTA;
void preencher_lista(LISTA* lista, int *tam);
void add_elemento_final(LISTA* lista, int n);
void lista_para_vetor(LISTA* lista, int *vet, int tam);
void imprimir_vetor(int vet[], int tam);
