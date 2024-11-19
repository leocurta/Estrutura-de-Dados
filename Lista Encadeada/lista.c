/* Leonardo Costa Curta */
#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

/* Cria uma nova lista */
noLista *listaCriaNova() {
    return NULL;
}

/* Verifica se a lista eh vazia */
int listaEhVazia(noLista *L) {
    return (L == NULL);
}

/* Apaga todos os elementos da lista */
void listaApaga(noLista **L) {
    noLista *aux;

    while (!listaEhVazia(*L)) {
        aux = *L;
        *L = (*L)->prox;
        free(aux);
    }
    return;
}

/* Insere um elemento na primeira posicao */
int listaInsereInicio(noLista **L, int info) {
    noLista *novo;

    novo = (noLista *)malloc(sizeof(noLista));
    if (novo != NULL){
        novo -> info = info;
        novo -> prox = *L;
        *L = novo;
        return 1;
    } else {
        return 0;
    }
}

/* Insere um elemento na ultima posicao */
int listaInsereFim(noLista **L, int info) {
    noLista *novo, *aux;

    if (listaEhVazia(*L)) {
        return listaInsereInicio(L, info);
    } else {
        novo = (noLista *)malloc(sizeof(noLista));
        if (novo != NULL){
            novo -> info = info;
            novo -> prox = NULL;
            aux = *L;
            while (aux->prox != NULL) {
                aux = aux->prox;
            }
            aux->prox = novo;

            return 1;
        } else {
            return 0;
        }
    } 
}

/* Insere um elemento em uma determinada posicao p>0 */
int listaInserePos(noLista **L, int info, int pos) {
    noLista *novo, *aux;
    int atual;

    if (listaEhVazia(*L) || pos <= 1) {
        return listaInsereInicio(L, info);
    } else {
        novo = (noLista *)malloc(sizeof(noLista));
        if (novo != NULL){
            novo -> info = info;
            aux = *L;
            atual = 1;
            while (aux->prox != NULL && atual < pos - 1) {
                aux = aux->prox;
                atual++;
            }
            novo->prox = aux->prox;
            aux->prox = novo;

            return 1;
        }
    }
    return 0;
}

/* Remove o primeiro elemento */
int listaRemoveInicio(noLista **L, int *info) {
    noLista *aux;

    if (listaEhVazia(*L)) {
        return 0;
    } else {
        aux = *L;
        *L = (*L)->prox;
        *info = aux->info;
        free(aux);
        return 1;
    }
}

/* Remove o último elemento */
int listaRemoveFim(noLista **L, int *info) {
    noLista *aux, *ant;

    if (listaEhVazia(*L)) {
        return 0;
    } else {
        aux = *L;
        ant = NULL;
        while (aux->prox != NULL) {
            ant = aux;
            aux = aux->prox;
        }
        if (ant == NULL) {
            *L = NULL;
        } else {
            ant->prox = NULL;
        }
        *info = aux->info;
        free(aux);
        return 1;   
    }
} 

/* Remove um elemento em uma posicao p > 0*/
int listaRemovePosicao(noLista **L, int *info, int pos) {
    noLista *aux, *ant;
    int atual;

    if (listaEhVazia(*L)) {
        return 0;

    } else if (pos < 1){
        return 0;

    } else if (pos == 1) {
        return listaRemoveInicio(L, info);

    } else {
        aux = *L;
        ant = NULL;
        atual = 1;
        while (aux != NULL && atual < pos) {
            ant = aux;
            aux = aux->prox;
            atual++;
        }
        if (aux == NULL) {
            return 0; // Posição fora dos limites da lista
        }
        ant->prox = aux->prox;
        *info = aux->info;
        free(aux);
        return 1;
    }
}


/* Procura Elemento na Lista e retorna sua posição > 0 */
int listaPesquisaElemento(noLista *L, int info) {
    int atual;

    if (listaEhVazia(L)) {
        return 0;
    } else {
        atual = 1;
        while (L != NULL && L->info != info) {
            L = L->prox;
            atual++;
        }
        if (L != NULL) {
            return atual;
        } else {
            return 0;
        }
    }
}

/* Inverte os elementos da Lista */
void listaInverte(noLista **L) {
    noLista *aux, *novaLista;

    novaLista = NULL;
    while (!listaEhVazia(*L)){
        aux = *L;
        *L = (*L)->prox;
        aux->prox = novaLista;
        novaLista = aux;
    }
    *L = novaLista;

    return;
}