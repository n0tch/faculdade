struct lista{
    int vlr;
    struct lista *prox;
};

typedef struct lista LISTA;

void vet_para_lista(LISTA* lista, int vet[], int n);
void preencher_vetor(int *vet, int n);
int recebe_num(int i);
void imprimi_lista(LISTA* lista);
