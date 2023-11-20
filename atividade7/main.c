#include <stdio.h>
#include "fila.h"
#include "pilha.h"

int main() {
    // FILA
    printf("FILA IMPRESSAO HP L300\n");

    FilaImpressao fila;
    fila.frente = 0;
    fila.tras = -1;
    //colocar mais objetos na impressora (int , char)
    TarefaImpressao tarefa1 = {20, "Estrutura.pdf"};
    TarefaImpressao tarefa2 = {12, "IPVA.pdf"};
    TarefaImpressao tarefa3 = {4, "DIREITOS.pdf"};
    TarefaImpressao tarefa4 = {10, "APELIDOS_TONINHO.pdf"};
    enfileirar(&fila, tarefa1);
    enfileirar(&fila, tarefa2);
    enfileirar(&fila, tarefa3);
    enfileirar(&fila, tarefa4);
    while (fila.frente <= fila.tras) {
        desenfileirar(&fila);
    }
    //fim fila
    system ("pause");
    system  ("cls");
    // PILHA
    printf("ESTANTE DE LIVROS\n");

    Estante minhaEstante;
    inicializarEstante(&minhaEstante);
    //colocar mais objetos na estante (char , char, int)
    Livro livro1 = {"Dom Quixote", "Miguel de Cervantes", 1605};
    Livro livro2 = {"1001 dalmatas", "Gabriel García Márquez", 1967};
    Livro livro3 = {"A Arte da Guerra", "Sun Tzu", -500}; 
    Livro livro4 = {"Ulisses", "James Joyce", 1922};

    empilharLivro(&minhaEstante, livro1);
    empilharLivro(&minhaEstante, livro2);
    empilharLivro(&minhaEstante, livro3);
    empilharLivro(&minhaEstante, livro4);
    desempilharLivro(&minhaEstante);
    desempilharLivro(&minhaEstante);
    desempilharLivro(&minhaEstante);
    desempilharLivro(&minhaEstante);
    //fim pilha

    return 0;
}
