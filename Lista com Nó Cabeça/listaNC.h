/* Lista simples encadeada com  no cabeca */


typedef struct _ListaNC_ noListaNC;

struct _ListaNC_ {
    int       info;
    noListaNC *prox;
};

/* Cria uma nova lista */
noListaNC *listaCriaNova();

/* Verifica se a lista eh vazia */
int listaEhVazia(noListaNC *L);

/* Apaga so os elementos da lista */
void listaEsvazia(noListaNC *L);

/* Apaga todos os elementos da lista */
void listaApaga(noListaNC **L);

/* Insere um elemento na primeira posicao */
int listaInsereInicio(noListaNC *L, int info);

/* Insere um elemento na ultima posicao */
int listaInsereFim(noListaNC *L, int info);

/* Insere um elemento em uma determinada posicao p>0 */
int listaInserePos(noListaNC *L, int info, int pos);

/* Remove o primeiro elemento */
int listaRemoveInicio(noListaNC *L, int *info);

/* Remove o último elemento */
int listaRemoveFim(noListaNC *L, int *info);

/* Remove um elemento em uma posicao p>0 */
int listaRemovePosicao(noListaNC *L, int *info, int pos);

/* Procura Elemento na Lista e retorna sua posição > 0 */
int listaPesquisaElemento(noListaNC *L, int info);

/* Inverte os elementos da Lista */
void listaInverte(noListaNC *L);

