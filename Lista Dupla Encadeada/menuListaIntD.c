#include <stdio.h>
#include "listaD.h"

int leInfo(char *s) {
    int v;
    printf("%s", s);
    scanf("%d", &v);
    return v;
}

void imprimeLista(noListaD *L) {
    if (!listaEhVazia(L)) {
        printf("L: %d", L->info);
        L = L->prox;
        while (!listaEhVazia(L)) {
            printf(" <==> %d", L->info);
            L = L->prox;
        }
        printf("\n");
    } else
        printf("L: Vazia!\n");
}

int main() {
    noListaD *Lista;
    int op, info, p, res;

	Lista = listaCriaNova();
    do {
        printf("\nEscolha uma opcao:\n");
        printf("1 - Inserir Inicio\t2 - Inserir Fim\t\t3 - Inserir Posicao\n");
        printf("4 - Remover Inicio\t5 - Remover Fim\t\t6 - Remover Posicao\n");
        printf("7 - Pesquisar Elem\t8 - Inverter Lista\t9 - Apagar Lista\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &op);
        switch(op) {
            case 1:
            case 2:
            case 3:
                info = leInfo("Digite o valor a ser inserido: ");
                if (op == 1) {
					res = listaInsereInicio(&Lista, info);
                } else if (op == 2) {
					res = listaInsereFim(&Lista, info);
                } else {
                    p = leInfo("Digite a posicao para insercao: ");
                    res = listaInserePos(&Lista, info, p);
                }
                if (res == 0) {
                	printf("Falha ao inserir valor '%d'.\n", info);
				}
                break;
            case 4:
            case 5:
            case 6:
                if (op == 4) {
					res = listaRemoveInicio(&Lista, &info);
                } else if (op == 5) {
					res = listaRemoveFim(&Lista, &info);
                } else {
                    p = leInfo("Digite a posicao para insercao: ");
                    res = listaRemovePosicao(&Lista, &info, p);
                }
                if (res == 0) {
                	printf("Falha ao remover item.\n");
				} else {
					printf("O item '%d' foi removido da lista.\n", info);
				}
                break;
            case 7:
                info = leInfo("Digite o valor a ser procurado: ");
                res = listaPesquisaElemento(Lista, info);
                if (res > 0) {
                	printf("O valor '%d foi encontrado na %dª posicao.\n", info, res);
				} else {
					printf("Valor '%d' nao encontrado!\n", info);
				}
                break;
            case 8:
            	listaInverte(&Lista);
                break;
            case 9:
                listaApaga(&Lista);
                break;
            case 0:
                break;
            default:
                printf("Opcao invalida!!!!\n\n");
        }
        if (op > 0 && op < 10) {
            imprimeLista(Lista);
        }
    } while (op != 0);
	listaApaga(&Lista);
	
    return 0;
}
