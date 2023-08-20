#include <stdio.h>

int verificar_array(int numeroPad[], int tamanho, int buscar){
    int contador = 0;

    for (int i = 0; i<tamanho;i++){
        if (numeroPad[i]==buscar){
            contador++;
        }
    }
    return contador;
}

int main () {
    int numeroPad[]={5, 7, 9, 6, 7, 11, 6, 5};
    int tamanho = sizeof (numeroPad) / sizeof (numeroPad[0]);
    int buscar=0;

    printf ("Informe o numero que deseja procurar no array: ");
    scanf ("%i", &buscar);

    int quantidade = verificar_array(numeroPad, tamanho, buscar);

    printf ("O numero %i foi encontrado %i vezes no array", buscar, quantidade);

    return 0;
}
