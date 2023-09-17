#include <stdio.h>
#include <stdlib.h>
#include "bubble_sort.h"
#include <string.h>

#define tam2 100
#define tam 100

void bubble_sort(char array[][tam2], int qtdpa) {
    char temp[tam2];
    for (int i = 0; i < qtdpa - 1; i++) {
        for (int j = 0; j < qtdpa - 1 - i; j++) {
            if (strcmp(array[j], array[j + 1]) > 0) {
                strcpy(temp, array[j]);
                strcpy(array[j], array[j + 1]);
                strcpy(array[j + 1], temp);
            }
        }
    }

    FILE *arqord = fopen("palavrasOrd.txt", "w");


    for (int i = 0; i < qtdpa; i++) {
        fprintf(arqord, "%s\n", array[i]);
    }

    fclose(arqord);
}
