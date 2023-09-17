#include <stdio.h>
#include <stdlib.h>
#include "bubble_sort.h"
#include <string.h>

#define tam 100
#define tam2 100

void alocar_array(char array[][tam2], int *qtdpa, int *i, const char *arq_entrad) {
    FILE *arqNord = fopen(arq_entrad, "r");

    if (arqNord == NULL) {
        perror("Erro ao abrir o arquivo de entrada");
        exit(1);
    }

    while (*i < tam && fscanf(arqNord, "%s", array[*i]) != EOF) {
        (*i)++;
        (*qtdpa)++;
    }

    fclose(arqNord);
}

void listar(char array[][tam2], int qtdpa) {
    printf("\n");
    for (int j = 0; j < qtdpa; j++) {
        printf("%s\n", array[j]);
    }
    printf("\n");
}

void listarordenados(char array[][tam2], int qtdpa) {
    printf("\n");
    for (int i = 0; i < qtdpa; i++) {
        printf("%s\n", array[i]);
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <arquivo_de_entrada>\n", argv[0]);
        return 1;
    }

    char array[tam][tam2];
    int i = 0;
    int qtdpa = 0;
    const char *arq_entrad = argv[1];

    alocar_array(array, &qtdpa, &i, arq_entrad);
    listar(array, qtdpa);
    bubble_sort(array, qtdpa);
    listarordenados(array, qtdpa);

    return 0;
}
