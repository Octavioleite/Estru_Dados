#ifndef FILA_H
#define FILA_H

#define MAX_IMPRESSAO 100

typedef struct TarefaImpressao {
    int numeroPaginas;
    char nomeDocumento[50];
} TarefaImpressao;

typedef struct FilaImpressao {
    TarefaImpressao tarefas[MAX_IMPRESSAO];
    int frente, tras;
} FilaImpressao;

void enfileirar(FilaImpressao *fila, TarefaImpressao tarefa);
void desenfileirar(FilaImpressao *fila);

#endif
