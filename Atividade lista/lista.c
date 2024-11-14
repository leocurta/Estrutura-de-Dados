/*Leonardo Costa Curta*/
#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

/* Cria uma nova lista */
noLista *listaCriaNova() {
    noLista *novaLista = (noLista *) malloc(sizeof(noLista));
    if (novaLista != NULL) {
        novaLista->info = 0;
        novaLista->prox = NULL;
    }
    return novaLista;
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
}

/* Insere um elemento na primeira posicao */
int listaInsereInicio(noLista **L, int info) {
    noLista *novoNo;
    novoNo= (noLista *) malloc(sizeof(noLista));
    if (novoNo == NULL) {
        return 0;
    }
    novoNo->info = info;
    novoNo->prox = *L;
    *L = novoNo;

    return 1; 
}

/* Insere um elemento na ultima posicao */
int listaInsereFim(noLista **L, int info) {
    noLista *novoNo, *aux;
    if (listaEhVazia(*L)) {
        return listaInsereInicio(L, info);
    } else {
        novoNo= (noLista *) malloc(sizeof(noLista));
        if (novoNo == NULL) {
            return 0;
        }
        novoNo->info = info;
        novoNo->prox = NULL;
        
        aux = *L;
        while (aux-> prox != NULL){
            aux = aux->prox;
        }
        aux->prox = novoNo;
        return 1; 
    }
}

/* Insere um elemento em uma determinada posicao p>0 */
int listaInserePos(noLista **L, int info, int pos) {
    noLista *novoNo, *aux;
    int atual;
    if (listaEhVazia(*L) || pos<=1) {
            return listaInsereInicio(L, info);
        } else {
            novoNo= (noLista *) malloc(sizeof(noLista));
            if (novoNo == NULL) {
                return 0;
            }
            novoNo->info = info;
            novoNo->prox = NULL;
            
            aux = *L;
            atual = 1;
            while (aux-> prox != NULL && atual < pos-1){
                aux = aux->prox;
                atual++;
            }
            novoNo->prox = aux->prox;
            aux->prox = novoNo;
            return 1; 
        }
        return 0;
}

/* Remove o primeiro elemento */
int listaRemoveInicio(noLista **L, int *info) {
    noLista *aux;
    if (listaEhVazia(*L)){
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

    if (listaEhVazia(*L)){
        return 0;
    } else {
        aux = *L;
        if (ant->prox != NULL){
            ant = aux;
            aux = ant->prox;
            while (aux->prox != NULL){
                ant = aux;
                aux = aux->prox;
            }
            ant->prox = NULL;
        } else {
            *L = NULL;
        }
        *info = aux->info;
        free(aux);

        return 1;
    }
}

/* Remove um elemento em uma posicao p > 0*/
int listaRemovePosicao(noLista **L,int *info, int pos) {
    noLista *aux, *ant;
    int atual;

    if (listaEhVazia(*L)){
        return 0;

    } else if (pos == 1) {
        listaRemoveInicio(L, info);

    } else if(pos <= 1){
        return listaRemoveInicio(L, info);

    }else {
        aux = *L;
        if (ant->prox != NULL){
            ant = aux;
            aux = ant->prox;
            atual = 2;
            while (aux->prox != NULL && atual < pos){
                ant = aux;
                aux = aux->prox;
                atual++;
            }
            if (atual == pos){
                ant->prox = aux->prox;
                *info = aux->info;
                free(aux);
                return 1;
            } else {
                return 0;
            }
        } else {
            return 0;
        }
    }
}

/* Procura Elemento na Lista e retorna sua posição > 0 */
int listaPesquisaElemento(noLista *L, int info) {
    int atual;
    if (listaEhVazia(L)){
        return 0;
     } else {
        atual = 1;
        while (L != NULL && L->info != info){
            L = L->prox;
            atual++;
        }
        if(L == NULL)
            return 0;
         else 
            return atual;
     }
}

/* Inverte os elementos da Lista */
void listaInverte(noLista **L) {
    noLista *aux;

    if (listaEhVazia(L)){
        return 0;
     } 

    return;
}

