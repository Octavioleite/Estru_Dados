#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    float y;
} Ponto;

int main(int argc, char* argv[]) {
    if (argc != 2) {
        printf("Uso: %s <arquivo.csv>\n", argv[0]);
        return 1;
    }

    FILE* arquivo = fopen(argv[1], "r");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    int capacidade = 10;
    int tamanho = 0;
    Ponto* pontos = malloc(capacidade * sizeof(Ponto));

    if (pontos == NULL) {
        perror("Erro ao alocar memória");
        fclose(arquivo);
        return 1;
    }

    char linha[100];

    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        if (tamanho == capacidade) {
            capacidade *= 2;
            Ponto* novo_pontos = realloc(pontos, capacidade * sizeof(Ponto));
            if (novo_pontos == NULL) {
                perror("Erro ao redimensionar o array");
                fclose(arquivo);
                free(pontos);
                return 1;
            }
            pontos = novo_pontos;
        }

        if (sscanf(linha, "%d,%f", &pontos[tamanho].x, &pontos[tamanho].y) == 2) {
            tamanho++;
        }
    }

    fclose(arquivo);

    if (tamanho == 0) {
        printf("Nenhum ponto válido encontrado no arquivo.\n");
        free(pontos);
        return 1;
    }

    int soma_x = 0;
    float soma_y = 0.0;

    for (int i = 0; i < tamanho; i++) {
        soma_x += pontos[i].x;
        soma_y += pontos[i].y;
    }

    float media_x = (float)soma_x / tamanho;
    float media_y = soma_y / tamanho;

    float numerador = 0.0;
    float denominador = 0.0;

    for (int i = 0; i < tamanho; i++) {
        numerador += (pontos[i].x - media_x) * (pontos[i].y - media_y);
        denominador += (pontos[i].x - media_x) * (pontos[i].x - media_x);
    }

    float coeficiente_angular = numerador / denominador;
    float coeficiente_linear = media_y - coeficiente_angular * media_x;

    printf("Equação da regressão linear: y = %.2fx + %.2f\n", coeficiente_angular, coeficiente_linear);

    free(pontos);

    return 0;
}
