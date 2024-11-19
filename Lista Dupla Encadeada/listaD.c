/* *************************************************
* Autor: Nielsen Simoes                            *
************************************************* */
/* Lista duplamente encadeada */
#include <stdio.h>
#include <stdlib.h>
#include "listaD.h"

/* Cria uma nova lista */
noListaD *listaCriaNova() {
    /* Uma nova lista deve ser sempre uma lista vazia */
    return NULL;
}

/* Verifica se a lista eh vazia */
int listaEhVazia(noListaD *L) {
    /* A lista vazia eh um ponteiro sem endereco valido */
    return (L == NULL);
}

/* Apaga todos os elementos da lista */
void listaApaga(noListaD **L) {

    return;
}

/* Insere um elemento na primeira posicao */
int listaInsereInicio(noListaD **L, int info) {

    return 0;
}

/* Insere um elemento na ultima posicao */
int listaInsereFim(noListaD **L, int info) {

    return 0;
}

/* Insere um elemento em uma determinada posicao p>0 */
int listaInserePos(noListaD **L, int info, int pos) {

    return 0;
}

/* Remove o primeiro elemento */
int listaRemoveInicio(noListaD **L, int *info) {

    return 0;
}

/* Remove o último elemento */
int listaRemoveFim(noListaD **L, int *info) {

   return 0;
}

/* Remove um elemento em uma posicao p > 0*/
int listaRemovePosicao(noListaD **L, int *info, int pos) {

    return 0;
}

/* Procura Elemento na Lista e retorna sua posição > 0 */
int listaPesquisaElemento(noListaD *L, int info) {

    return 0;
}

/* Inverte os elementos da Lista */
void listaInverte(noListaD **L) {

    return;
}

