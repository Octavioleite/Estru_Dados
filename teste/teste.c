#include <stdio.h>
#include <stdlib.h>


int verificar_numero_primo (int n){
return 0;

}


int main(int argc, char* argv[]) {
	
 int n, i, res=0;

    n = atoi(argv[1]);

    for (i=2; i<=n/2;i++){
        if (n % i == 0){

            res++;
            break;
        }
    }



    if (res == 0){
        printf (" %d o número n e primo", n);
    
    } else {
        printf (" %d o número e primo", n);

    }

/*
    
    estrutura do argv serve como scanf mais simplificado, colocar depois do .exe

   
*/


    
    return 0;
}