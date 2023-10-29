#include <stdio.h>
#include <stdlib.h>
#include "lista.h"


Lista* lista_criar() {
    Lista* nova_lista = (Lista*)malloc(sizeof(Lista));
    nova_lista->cabeca = NULL;
    return nova_lista;
}


No* no(float valor, No* proximo_no) {
    No* novo_no = (No*)malloc(sizeof(No));
    novo_no->valor = valor;
    novo_no->proximo_no = proximo_no;
    return novo_no;
}


void lista_inserir_no(Lista* lista, No* novo_no, int ordenar_lista) {
    if (ordenar_lista == 1) {
        
        if (lista->cabeca == NULL || novo_no->valor < lista->cabeca->valor) {
            novo_no->proximo_no = lista->cabeca;
            lista->cabeca = novo_no;
        } else {
            No* atual = lista->cabeca;
            while (atual->proximo_no != NULL && atual->proximo_no->valor <= novo_no->valor) {
                atual = atual->proximo_no;
            }
            novo_no->proximo_no = atual->proximo_no;
            atual->proximo_no = novo_no;
        }
    } else {
        
        if (lista->cabeca == NULL) {
            lista->cabeca = novo_no;
        } else {
            No* atual = lista->cabeca;
            while (atual->proximo_no != NULL) {
                atual = atual->proximo_no;
            }
            atual->proximo_no = novo_no;
        }
    }
}


void lista_imprimir(Lista* lista) {
    No* atual = lista->cabeca;
    while (atual != NULL) {
        printf("%.2f ", atual->valor);
        atual = atual->proximo_no;
    }
    printf("\n");
}


void lista_liberar(Lista* lista) {
    No* atual = lista->cabeca;
    while (atual != NULL) {
        No* proximo = atual->proximo_no;
        free(atual);
        atual = proximo;
    }
    free(lista);
}
