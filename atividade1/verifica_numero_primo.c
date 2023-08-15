#include <stdio.h>
#include <stdlib.h>

int verificaNumeroPrimo(int n) {
   
    if (n <= 1) {
        return 0; 
    }

    if (n <= 3) {
        return 1; 
    }

    if (n % 2 == 0 || n % 3 == 0) {
        return 0; 
    }


    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return 0; 
        }
    }

    return 1; 
}
int main(int argc, char *argv[]) {

   
    if (argc != 2) {
        printf("Uso: %s <numero>\n", argv[0]);
        return 1;
    }

    int numero = atoi(argv[1]);
    int resultado = verificaNumeroPrimo(numero);

    if (resultado == 1) {
        printf("%i e um numero primo.\n", numero);
    } else {
        printf("%i nao e um numero primo.\n", numero);
    }

    return 0;
}
