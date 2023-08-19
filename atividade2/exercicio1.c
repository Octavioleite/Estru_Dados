#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

   
 int vetor1[], i, somaTot, p;

 printf ("Informe a quantidade de números desejada: ");
 scanf ("%i", &i);


 for (p = 1; p<=i;p++){


    printf ("Informe o %i numero: ", p);
    scanf ("%i", vetor1[p]);

    somaTot+=vetor1[p];


 }
    
printf ("soma de todos: %i", somaTot);


    return 0;
}
