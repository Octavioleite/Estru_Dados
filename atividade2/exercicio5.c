#include <stdio.h>

void multiarray(int primeiroArray[], int segundoArray[], int resultado[], int tamanhoArray) {
    for (int i = 0; i < tamanhoArray; i++) {
        resultado[i] = primeiroArray[i] * segundoArray[i];
    }
}

int main() {
    int tamanhoArray = 0;

    printf("Informe quantos numeros deseja que os arrays tenham: ");
    scanf("%i", &tamanhoArray);

    int primeiroArray[tamanhoArray], segundoArray[tamanhoArray], resultado[tamanhoArray];

    for (int i = 0; i < tamanhoArray; i++) {
        printf("Informe o %i numero do primeiro array: ", i + 1);
        scanf("%i", &primeiroArray[i]);
    }

    for (int i = 0; i < tamanhoArray; i++) {
        printf("Informe o %i numero do segundo array: ", i + 1);
        scanf("%i", &segundoArray[i]);
    }

    multiarray(primeiroArray, segundoArray, resultado, tamanhoArray);

    printf("Resultado da multiplicacao:\n");
    for (int i = 0; i < tamanhoArray; i++) {
        printf("%i\t", resultado[i]);
    }

    return 0;
}
