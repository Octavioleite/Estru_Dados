#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    int a=3;
    int b =a;
    int* p =&a;

    printf ("a = %d\n", a);
    printf ("p = %d\n", *p);
 
    int* p1;

    p1 = malloc (sizeof (int));
    printf ("p1 = %d\n", p1); 
    printf ("p1 = %d\n", *p1); 
    *p1= 2;
    printf ("p1 = %d\n", *p1); 



    
    return 0;
}
