/*
* Arquivo: EstruturasCondicionaisOperadorTernarioIf.c
* Autor: Prof. Dr. David Buzatto
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    int n = 20;
    int v;

    // n é par? se sim, atribui 1 a v, caso contrário, atribui 0
    if (n % 2 == 0) {
        v = 1;
    } else{
        v = 0;
    }
    
    printf("%d", v);

    return 0;
}