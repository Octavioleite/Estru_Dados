#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int qtdNum = 0, o = 1, somaTot = 0;

    printf("Digite a quantidade de numeros que deseja informar: ");
    scanf("%i", &qtdNum);

    int nColocados[qtdNum];

    for (int i = 0; i < qtdNum; i++) {
        printf("%i Numero: ", o);
        scanf("%i", &nColocados[i]);
      o++;
      somaTot+=nColocados[i];
        
    }
   
   for (int i = 0; i < qtdNum; i++){

    printf ("%d\t", nColocados[i]);

   }
   
    printf ("soma de todos os numeros: %i", somaTot);
    

    return 0;
}
