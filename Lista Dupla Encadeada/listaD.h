/* Lista duplamente encadeada */

typedef struct _ListaD_ noListaD;

struct _ListaD_ {
    int      info;
    noListaD *ant;
    noListaD *prox;
};

/* Cria uma nova lista */
noListaD *listaCriaNova();

/* Verifica se a lista eh vazia */
int listaEhVazia(noListaD *L);

/* Apaga todos os elementos da lista */
void listaApaga(noListaD **L);

/* Insere um elemento na primeira posicao */
int listaInsereInicio(noListaD **L, int info);

/* Insere um elemento na ultima posicao */
int listaInsereFim(noListaD **L, int info);

/* Insere um elemento em uma determinada posicao p>0 */
int listaInserePos(noListaD **L, int info, int pos);

/* Remove o primeiro elemento */
int listaRemoveInicio(noListaD **L, int *info);

/* Remove o último elemento */
int listaRemoveFim(noListaD **L, int *info);

/* Remove um elemento em uma posicao p>0 */
int listaRemovePosicao(noListaD **L, int *info, int pos);

/* Procura Elemento na Lista e retorna sua posição > 0 */
int listaPesquisaElemento(noListaD *L, int info);

/* Inverte os elementos da Lista */
void listaInverte(noListaD **L);

