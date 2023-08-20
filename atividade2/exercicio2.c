#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int qtdNum=0;


    printf ("Informe a quantidade de numeros que deseja inserir: ");
    scanf ("%i", &qtdNum);

    int nInformado[qtdNum];
    int maiorN = 0, menorN=10;


    for (int i = 0; i<qtdNum;i++){

        printf ("Informe o numero: ");
        scanf ("%i", &nInformado[i]);

        if (nInformado[i]>maiorN){
            maiorN=nInformado[i];
        }
        if (nInformado[i]<menorN){
            menorN=nInformado[i];

        }

    }

  printf ("menor numero: %i\n maior numero: %i", menorN, maiorN);

    

    return 0;
}
