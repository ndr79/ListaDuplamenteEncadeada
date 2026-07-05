#include<stdio.h>
#include<stdlib.h>

#include "listaDuplamenteEncadeada.h"

int main(int argc, const char* argv[]) {
    Lista* l = NULL;

    l = inserir(l, 2);
    l = inserir(l, 5);
    l = inserir(l, 13);
    l = inserir(l, 24);

    liberar(l);
    l = NULL;

    printf("\n");
    return 0;
}