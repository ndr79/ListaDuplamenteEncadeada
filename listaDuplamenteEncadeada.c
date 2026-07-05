#include "listaDuplamenteEncadeada.h"

#include<stdlib.h>

// Verifica se a lista é vazia
// Entrada: lista
// Retorno: 1 se a lista é vazia ou 0 caso contrário
// Pré-condição: nenhuma
// Pós-condição: nenhuma
int vazia(Lista* l) {
    return (l == NULL);
}

// Faz a inserção de um item na cabeça da lista
// Entrada: lista e o elemento a ser inserido
// Retorno: lista atualizada
// Pré-condição: nenhuma
// Pós-condição: o elemento é inserido na lista
Lista* inserir(Lista* l, TipoItem info) {
    Lista* aux = malloc(sizeof(Lista));

    if(aux == NULL) {
        printf("Erro de alocação.\n");
        return l;
    }

    aux->info = info;
    aux->ant = NULL;
    aux->prox = l;

    if(!vazia(l))   // ajusta o ponteiro anterior do antigo primeiro nó
        l->ant = aux;

    return aux; // o novo nó passa a ser a cabeça da lista
}

// Libera todos os nós da lista
// Entrada: lista
// Retorno: nenhum
// Pré-condição: nenhuma
// Pós-condição: toda memória ocupada pela lista é liberada
void liberar(Lista* l) {
    Lista* aux;
    while(l != NULL) {
        aux = l;
        l = l->prox;
        free(aux);
    }
}

// Imprime todos os elementos da lista
// Entrada: lista
// Retorno: nenhum
// Pré-condição: nenhuma
// Pós-condição: os itens da lista são exibidos no console
void imprimir(Lista* l) {
    if(vazia(l))
        printf("Lista vazia.\n");
    else {
        printf("[ ");
        while(l != NULL) {
            printf("%d ", l->info);
            l = l->prox;
        }
        printf("]\n");
    }
}

// Faz a retirada de um item da lista
// Entrada: lista e o elemento a ser retirado
// Retorno: lista atualizada
// Pré-condição: nenhuma
// Pós-condição: o elemento é retirado da lista
Lista* retirar(Lista* l, TipoItem x) {
    if(vazia(l)) {
        printf("Lista vazia.\n");
        return l;
    }

    Lista* p = l;

    while(p != NULL && p->info != x) // localiza o elemento
        p = p->prox;

    if(p == NULL) {
        printf("Elemento não encontrado.\n");
        return l;
    }

    if(p == l) {    // remoção na cabeça
        l = p->prox;
        if(l != NULL)
            l->ant = NULL;
    }
    else {
        p->ant->prox = p->prox; // liga o elemento anterior ao próximo
        if(p->prox != NULL) // se não era o último, ajusta o ponteiro anterior do próximo
            p->prox->ant = p->ant;
    }
    free(p);
    return l;
}