#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LIVROS 100
#define TAM_NOME 100

int main() {
    int opcao = 0, rodagem = 0;
    int id[MAX_LIVROS];
    char nome[MAX_LIVROS][TAM_NOME];

    while (1) {
        printf("1-Adicionar livro\n2-Listar livros presentes na lista\n3-Sair do programa\nEscolha: ");
        scanf("%i", &opcao);

        if (opcao == 1) {
            if (rodagem < MAX_LIVROS) {
                printf("Informe o id do livro: ");
                scanf("%i", &id[rodagem]);

                printf("Informe o nome do livro: ");
                getchar();  // Limpar o caractere de nova linha pendente
                fgets(nome[rodagem], TAM_NOME, stdin);
                nome[rodagem][strcspn(nome[rodagem], "\n")] = '\0';  // Remover o caractere de nova linha

                rodagem += 1;
                system("pause");
            } else {
                printf("Limite de livros atingido.\n");
            }
        } else if (opcao == 2) {
            for (int i = 0; i < rodagem; i++) {
                printf("Id do livro adicionado: %i\n", id[i]);
                printf("Nome do livro: %s\n", nome[i]);
            }
            system("pause");
        } else if (opcao == 3) {
            break;  // Encerra o programa
        }
    }

    return 0;
}
