#ifndef PILHA_H
#define PILHA_H

#define MAX_LIVROS 10

typedef struct Livro {
    char titulo[50];
    char autor[50];
    int anoPublicacao;
} Livro;

typedef struct Estante {
    Livro pilha[MAX_LIVROS];
    int topo;
} Estante;

void inicializarEstante(Estante *estante);
int estaVazia(Estante *estante);
int estaCheia(Estante *estante);
void empilharLivro(Estante *estante, Livro livro);
void desempilharLivro(Estante *estante);

#endif
