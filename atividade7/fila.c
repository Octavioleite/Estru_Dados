#include "fila.h"
#include <stdio.h>
#include <string.h>

void enfileirar(FilaImpressao *fila, TarefaImpressao tarefa) {
    if (fila->tras == MAX_IMPRESSAO - 1) {
        printf("A fila de impressao esta cheia\n");
    } else {
        fila->tras++;
        fila->tarefas[fila->tras] = tarefa;
        printf("Tarefa \"%s\" foi adicionada a fila de impressao\n", tarefa.nomeDocumento);
    }
}

void desenfileirar(FilaImpressao *fila) {
    if (fila->frente > fila->tras) {
        printf("A fila de impressao está vazia\n");
    } else {
        printf("Imprimindo tarefa \"%s\" de %d paginas.\n", fila->tarefas[fila->frente].nomeDocumento, fila->tarefas[fila->frente].numeroPaginas);
        fila->frente++;
    }
}
