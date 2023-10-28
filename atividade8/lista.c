#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

No* no(char valor, No* proximo_no){
    No* no = malloc(sizeof(No));
    no->valor = valor;
    no->proximo_no = proximo_no;
    return no;
}

void lista_inserir_no(No* L, No* no){
    if(L != NULL){
        if(L->proximo_no == NULL){
            L->proximo_no = no;
        }
        else{
            lista_inserir_no(L->proximo_no, no);
        }
    }
}

void lista_imprimir(No* L){
    if(L != NULL){
        printf("%c ", L->valor);
        lista_imprimir(L->proximo_no);
    }
}

int lista_quantidade_nos(No* L){
    if(L != NULL){
        return 1 + lista_quantidade_nos(L->proximo_no);
    }
    return 0;
}

No* lista_copiar(No* L){
    if(L != NULL){
        return no(L->valor, lista_copiar(L->proximo_no));
    }
    return NULL;
}

void lista_concatenar(No* L, No* Lc){
    lista_inserir_no(L, Lc);
}

void lista_liberar(No* L){
    if(L != NULL){
        lista_liberar(L->proximo_no);
        free(L);
    }
}

//implementação atividade_8
int lista_verificar_existencia(No* L, char valor_busca) {
    No* cont = L;
    while (cont != NULL) {
        if (cont->valor == valor_busca) {
            return 1;  
        }
        cont = cont->proximo_no;
    }
    return 0; 
}
int lista_verificar_ocorrencias(No* L, char valor_busca) {
    int countador = 0;
    No* cont= L;
    while (cont!= NULL) {
        if (cont->valor == valor_busca) {
            countador++;
        }
        cont= cont->proximo_no;
    }
    return countador;
}
void lista_imprimir_inversa(No* L) {
    if (L == NULL) {
        return;
    }
    lista_imprimir_inversa(L->proximo_no);
    printf("%c ", L->valor);
}
void lista_inserir_no_i(No* L, int i, char valor) {
    if (i < 0) {
        printf("Indica invalido. nao e possivel (no invalido/menor que 0).\n");
        return;
    }
    if (i == 0) {
        No* novo_no = no(valor, L->proximo_no);
        L->proximo_no = novo_no;
    } else {
        if (L->proximo_no == NULL) {
            printf("indice fora dos padroes\n");
        } else {
            lista_inserir_no_i(L->proximo_no, i - 1, valor);
        }
    }
}
void lista_remover_no_i(No* L, int i) {
    if (i < 0) {
        printf("indice negativo (nao e possivel remover)\n");
        return;
    }
    if (i == 0) {
        if (L->proximo_no != NULL) {
            No* temp = L->proximo_no;
            L->proximo_no = temp->proximo_no;
            free(temp);
        } else {
            printf("indice fora dos padroes\\n");
        }
    } else {
        if (L->proximo_no == NULL) {
            printf("indice fora dos padroes\\n");
        } else {
            lista_remover_no_i(L->proximo_no, i - 1);
        }
    }
}
void lista_remover_no(No* L, char valor_busca) {
    No* cont= L;
    while (cont->proximo_no != NULL) {
        if (cont->proximo_no->valor == valor_busca) {
            No* temp = cont->proximo_no;
            cont->proximo_no = temp->proximo_no;
            free(temp);
        } else {
            cont = cont->proximo_no;
        }
    }
}




