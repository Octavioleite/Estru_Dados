#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv[]){


FILE* f;

f = fopen("teste.txt", "a");
if (f == NULL){
perror ("nao foi possivel abrir o arquivo");
exit (1);
}
int r = fprintf (f, "texto na tela\n");
if (r<0){
    perror ("nao foi possivel escrever no arquivo");
    exit (1);
}
fclose(f);

f = fopen("teste.txt", "r");

if (f == NULL){
perror ("nao foi possivel escrever no arquivo");
exit (1);
}
char txt[100];

while (!feof(f)){
    fgets (txt, 100, f);
    printf ("\t\t\n%s", txt);
}
fclose(f);
 
exit (0);
}