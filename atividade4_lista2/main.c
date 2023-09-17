#include <stdio.h>
#include <stdlib.h>
#include "bubble_sort.h"
#include <string.h>

#define tam 9

void imprimir_arr(int *arr, int n){
    printf("\n");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(int argc, char* argv[] ) {
    if (argc != tam + 1) {
        printf("Erro: Voce deve fornecer exatamente %d numeros na linha de comando.\n", tam);
        return 1;
    }

    int arr[tam];
    for (int i = 0; i < tam; i++){
        arr[i] = atoi(argv[i + 1]);
    }

    int n = sizeof(arr) / sizeof(int);
    imprimir_arr(arr, n);
    bubble_sort(arr, n);
    imprimir_arr(arr, n);

    return 0;
}
