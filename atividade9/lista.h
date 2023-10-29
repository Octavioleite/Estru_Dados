#ifndef LISTA_H
#define LISTA_H


typedef struct No {
    float valor;
    struct No* proximo_no;
} No;


typedef struct Lista {
    No* cabeca;
} Lista;


Lista* lista_criar();
No* no(float valor, No* proximo_no);
void lista_inserir_no(Lista* lista, No* novo_no, int ordenar_lista);
void lista_imprimir(Lista* lista);
void lista_liberar(Lista* lista);

#endif
