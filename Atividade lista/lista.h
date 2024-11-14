/*Leonardo Costa Curta*/


typedef struct _Lista_ noLista;

struct _Lista_ {
    int      info;
    noLista *prox;
};

/* Cria uma nova lista */
noLista *listaCriaNova();

/* Verifica se a lista eh vazia */
int listaEhVazia(noLista *L);

/* Apaga todos os elementos da lista */
void listaApaga(noLista **L);

/* Insere um elemento na primeira posicao */
int listaInsereInicio(noLista **L, int info);

/* Insere um elemento na ultima posicao */
int listaInsereFim(noLista **L, int info);

/* Insere um elemento em uma determinada posicao p>0 */
int listaInserePos(noLista **L, int info, int pos);

/* Remove o primeiro elemento */
int listaRemoveInicio(noLista **L, int *info);

/* Remove o último elemento */
int listaRemoveFim(noLista **L, int *info);

/* Remove um elemento em uma posicao p>0 */
int listaRemovePosicao(noLista **L, int pos);

/* Procura Elemento na Lista e retorna sua posição > 0 */
int listaPesquisaElemento(noLista *L, int info);

/* Inverte os elementos da Lista */
void listaInverte(noLista **L);

