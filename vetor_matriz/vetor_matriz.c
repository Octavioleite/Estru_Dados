#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LIVROS 100
#define TAM_NOME 100

// Função para salvar os dados em um arquivo de texto
void salvarDados(int id[], char nome[][TAM_NOME], int rodagem) {
    FILE *arquivo = fopen("livros.txt", "a+");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return;
    }

    for (int i = 0; i < rodagem; i++) {
        fprintf(arquivo, "Id do livro: %i\n", id[i]);
        fprintf(arquivo, "Nome do livro: %s\n", nome[i]);
    }

    fclose(arquivo);
    printf("Dados salvos em livros.txt\n");
}

// Função para listar os livros presentes no arquivo de texto
void listarLivros() {
    FILE *arquivo = fopen("livros.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return;
    }

    char linha[256];
    while (fgets(linha, sizeof(linha), arquivo)) {
        printf("%s", linha);
    }

    fclose(arquivo);
}

int main() {
    int opcao = 0, rodagem = 0;
    int id[MAX_LIVROS];
    char nome[MAX_LIVROS][TAM_NOME];

    while (1) {
        printf("1-Adicionar livro\n2-Listar livros presentes na lista\n3-Sair do programa\n4-Remover livro\n5-Salvar em arquivo\nEscolha: ");
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
            listarLivros();
            system("pause");
        } else if (opcao == 3) {
            break;  // Encerra o programa
        } else if (opcao == 4) {
            int removerLivro = 0;
            printf("Informe o id do livro que deseja remover: ");
            scanf("%i", &removerLivro);
            int livroEncontrado = -1;

            for (int i = 0; i < rodagem; i++) {
                if (removerLivro == id[i]) {
                    livroEncontrado = i;
                }
            }

            if (livroEncontrado != -1) {
                for (int i = livroEncontrado; i < rodagem - 1; i++) {
                    id[i] = id[i + 1];
                    strcpy(nome[i], nome[i + 1]); // Copie corretamente o nome
                }
                rodagem--;
                printf("Livro removido\n");
            } else {
                printf("Livro não encontrado\n");
            }
        } else if (opcao == 5) {
            salvarDados(id, nome, rodagem);
        }
    }

    return 0;
}
