#include <stdio.h>
#include <stdlib.h>

struct No {
    int data;
    struct No* esquerda;
    struct No* direita;
};

struct No* novoNo(int data) {
    struct No* no = (struct No*)malloc(sizeof(struct No));
    no->data = data;
    no->esquerda = NULL;
    no->direita = NULL;
    return no;
}

struct No* inserir(struct No* no, int data) {
    if (no == NULL) {
        return novoNo(data);
    }

    if (data < no->data) {
        no->esquerda = inserir(no->esquerda, data);
    } else if (data > no->data) {
        no->direita = inserir(no->direita, data);
    }

    return no;
}

void ordernar(struct No* raiz) {
    if (raiz != NULL) {
        ordernar(raiz->esquerda);
        printf("%d ", raiz->data);
        ordernar(raiz->direita);
    }
}

int main() {
    struct No* raiz = NULL;
    raiz = inserir(raiz, 50);
    inserir(raiz, 30);
    inserir(raiz, 20);
    inserir(raiz, 40);
    inserir(raiz, 70);
    inserir(raiz, 60);
    inserir(raiz, 80);

    printf("Percurso em ordem: ");
    ordernar(raiz);

    return 0;
}