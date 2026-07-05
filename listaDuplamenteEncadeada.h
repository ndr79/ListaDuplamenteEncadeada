#ifndef listaDuplamenteEncadeada_h
#define listaDuplamenteEncadeada_h

#include<stdio.h>

typedef int TipoItem;   // tipo dos elementos da lista

// Declaração da Estrutura nó
typedef struct no {
    TipoItem info;
    struct no* ant;     // ponteiro para o nó anterior
    struct no* prox;    // ponteiro para o próximo nó
} Lista;

// Verifica se a lista é vazia
// Entrada: lista
// Retorno: 1 se a lista é vazia ou 0 caso contrário
// Pré-condição: nenhuma
// Pós-condição: nenhuma
int vazia(Lista* l);

// Faz a inserção de um item na cabeça da lista
// Entrada: lista e o elemento a ser inserido
// Retorno: lista atualizada
// Pré-condição: nenhuma
// Pós-condição: o elemento é inserido na lista
Lista* inserir(Lista* l, TipoItem info);

// Libera todos os nós da lista
// Entrada: lista
// Retorno: nenhum
// Pré-condição: nenhuma
// Pós-condição: toda memória ocupada pela lista é liberada
void liberar(Lista* l);

// Imprime todos os elementos da lista
// Entrada: lista
// Retorno: nenhum
// Pré-condição: nenhuma
// Pós-condição: os itens da lista são exibidos no console
void imprimir(Lista* l);

// Faz a retirada de um item da lista
// Entrada: lista e o elemento a ser retirado
// Retorno: lista atualizada
// Pré-condição: nenhuma
// Pós-condição: o elemento é retirado da lista
Lista* retirar(Lista* l, TipoItem x);

#endif /* listaDuplamenteEncadeada_h */