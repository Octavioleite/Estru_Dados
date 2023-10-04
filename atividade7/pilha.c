#include "pilha.h"
#include <stdio.h>
#include <string.h>

void inicializarEstante(Estante *estante) {
    estante->topo = -1;
}

int estaVazia(Estante *estante) {
    return estante->topo == -1;
}

int estaCheia(Estante *estante) {
    return estante->topo == MAX_LIVROS - 1;
}

void empilharLivro(Estante *estante, Livro livro) {
    if (estaCheia(estante)) {
        printf("A estante esta cheia\n");
        return;
    }

    estante->topo++;
    estante->pilha[estante->topo] = livro;
    printf("Livro \"%s\" adicionado a estante\n", livro.titulo);
}

void desempilharLivro(Estante *estante) {
    if (estaVazia(estante)) {
        printf("A estante esta vazia\n");
        return;
    }

    Livro livroRemovido = estante->pilha[estante->topo];
    printf("Removendo livro \"%s\" da estante\n", livroRemovido.titulo);
    estante->topo--;
}
