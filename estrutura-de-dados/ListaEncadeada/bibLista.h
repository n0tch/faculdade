struct cel{
    int info;
    struct cel *prox;
};

typedef struct cel Celula;

void criar_lista(Celula* cel);
void inserir_final(Celula* cel, int info);
void imprimi_lista(Celula* cel);
int lista_vazia(Celula* cel);
int busca_elemento(Celula* cel, int vlr);
void excluir_elemento(Celula* cel, int vlr);
void exclui_lista(Celula* cel);
void insere_ordenado(Celula* cel, int vr);
void menu(Celula* cel, int op);
int entrar_dados();
