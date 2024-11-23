/* *************************************************
* Autor: Nielsen Simoes                            *
* Desc.: Desenvolvido em sala  com acomplanhamento *
* dos estudantes permitindo melhor compreensao dos *
* algoritmos usados nas implementacoes em C.       * 
************************************************* */
/* Lista simples encadeada com no cabeca */
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "listaNC.h"

#define NO_CABECA  INT_MIN

/* Cria uma nova lista */
noListaNC *listaCriaNova() {
    noListaNC *novo;
    /* Uma nova lista deve ser sempre uma lista vazia */

    novo = (noListaNC *) malloc(sizeof(noListaNC));
    if (novo != NULL) {
        novo->info = NO_CABECA;
        novo->prox = NULL;
    }
    return novo;
}

/* Verifica se a lista eh vazia */
int listaEhVazia(noListaNC *L) {
    /* A lista vazia eh um ponteiro sem endereco valido */
    return (L == NULL || L->prox == NULL);
}

/* Apaga so os elementos da lista */
void listaEsvazia(noListaNC *L) {

    return;
}


/* Apaga a lista */
void listaApaga(noListaNC **L) {

    return;
}

/* Insere um elemento na primeira posicao */
int listaInsereInicio(noListaNC *L, int info) {

    if (L == NULL)
        return 0;

    return 0;
}

/* Insere um elemento na ultima posicao */
int listaInsereFim(noListaNC *L, int info) {

    if (L == NULL)
        return 0;

    return 0;
}

/* Insere um elemento em uma determinada posicao p>0 */
int listaInserePos(noListaNC *L, int info, int pos) {

    if (L == NULL)
        return 0;
    
    return 0;
}

/* Remove o primeiro elemento */
int listaRemoveInicio(noListaNC *L, int *info) {

    if (L == NULL)
        return 0;

    return 0;
}

/* Remove o último elemento */
int listaRemoveFim(noListaNC *L, int *info) {

    if (L == NULL)
        return 0;

    return 0;
}

/* Remove um elemento em uma posicao p > 0*/
int listaRemovePosicao(noListaNC *L, int *info, int pos) {

    if (L == NULL)
        return 0;

    return 0;
}

/* Procura Elemento na Lista e retorna sua posição > 0 */
int listaPesquisaElemento(noListaNC *L, int info) {

    if (L == NULL)
        return 0;

    return 0;
}

/* Inverte os elementos da Lista */
void listaInverte(noListaNC *L) {

   if (L == NULL)
        return;

    return;
}

