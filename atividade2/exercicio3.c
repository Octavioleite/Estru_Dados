#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int veriNome (char *nPad[], int tam, char *busca){
    for (int i = 0; i<tam;i++){
        if (strcmp(nPad[i], busca)==0){
            return 1;

        }
    }
        return 0;
}

int main() {
    char *nPad[]={"ana", "barbara", "nadia"};
    int tam = sizeof (nPad) / sizeof (nPad[0]);
    char busca [50];

    printf ("Digite o nome que deseja buscar: ");
    scanf ("%s", busca);
    
    int resultado = veriNome (nPad, tam, busca);

    if (resultado == 1){
        printf ("1 -O nome %s foi encontrado no array", busca);
    }
    else {
        printf ("0 -O nome %s nao foi encontrado no array", busca);

    }
   

    return 0;
}
