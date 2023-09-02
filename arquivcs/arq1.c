#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[10];
    int cpf[10];
    char data_nascimento[20];
}Pessoa;


int main (int argc, char* argv[]){


FILE* f;

f = fopen("teste.dat", "a");
if (f == NULL){
perror ("nao foi possivel abrir o arquivo");
exit (1);
}
 
Pessoa p;
strcpy(p.nome, "Joao");
p.cpf = 123;
strcpy(p.data_nascimento, "11 - 11 - 2012");



fwrite (&p,sizeof(Pessoa), 1, f);
fclose(f);

f = fopen ("teste.dat","r");
Pessoa p2;
fread (&p2, sizeof(Pessoa),1,f);
printf ("%s\n",p2.nome);
fflush (stdin);
printf ("%d\n",p2.cpf);
fflush (stdin);
printf ("%s\n",p2.data_nascimento);
fclose(f);

exit (0);
}