#include <stdio.h>
#include <stdlib.h>
#include "tabela_hash.h"

int main() {
    put("Brasil", "Brasilia");
    put("EUA", "Washington, D.C.");
    put("França", "Paris");

    char* capital = get("Brasil");
    if (capital != NULL) {
        printf("A capital do Brasil e: %s\n", capital);
    } else {
        printf("Brasil nao encontrado na tabela.\n");
    }
    capital = get ("EUA");
    if (capital!=NULL){
            printf ("A capital dos Estados Unidos e: %s\n", capital);
    }else{
            printf ("Estados Unidos nao encontrado na tabela.\n");
    }
 capital = get ("França");
    if (capital!=NULL){
            printf ("A capital da França e: %s\n", capital);
    }else{
            printf ("França nao encontrado na tabela.\n");
    }

    capital = get("Canadá");
    if (capital != NULL) {
        printf("A capital do Canada e: %s\n", capital);
    } else {
        printf("Canada nao encontrado na tabela.\n");
    }

    return 0;
}
