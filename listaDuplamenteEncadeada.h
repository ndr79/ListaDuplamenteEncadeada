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


#endif /* listaDuplamenteEncadeada_h */