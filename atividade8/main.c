#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(int argc, char* argv[]) {
    No* n0 = no('C', NULL);
    No* n1 = no('E', NULL);
    No* n2 = no('A', no('D', no('B', no('X', no('Z', NULL)))));
    No* n3 = no('U', NULL);
    lista_inserir_no(n0, n2);
    lista_inserir_no(n0, n1);
    lista_inserir_no(n0, n3);
    lista_imprimir(n0);
    printf("\nqtd nos: %d", lista_quantidade_nos(n0));
    No* n_copia = lista_copiar(n0);
    printf("\n");
    lista_imprimir(n_copia);
    lista_concatenar(n0, n_copia);
    printf("\n");
    lista_imprimir(n0);

    char valor_busca = 'E';
    int existencia = lista_verificar_existencia(n0, valor_busca);
    printf("\nExistência de '%c' na lista: %d\n", valor_busca, existencia);

    lista_imprimir_inversa(n0);

    int i = 0;
    char valor_inserir = 'K';
    lista_inserir_no_i(n0, i, valor_inserir);
    printf ("\n\n\n");
    lista_imprimir(n0);
    printf("\nqtd nos: %d\n", lista_quantidade_nos(n0));//verifica lista

    int indice_remover = 0;  
    lista_remover_no_i(n0, indice_remover);

    char valor_remover = 'K';
    lista_remover_no(n0, valor_remover);
    printf ("\n\n\n");
    lista_imprimir(n0);
    printf("\nqtd nos: %d\n", lista_quantidade_nos(n0));//verifica lista
    lista_liberar(n0);
    n0= NULL;
    if(n0==NULL){//verifica lista
        printf ("\nlista vazia");//verifica lista
    }else{
        lista_imprimir(n0);//verifica lista
    }
     printf("\nqtd nos: %d\n", lista_quantidade_nos(n0));//verifica lista
    exit(0);
}
