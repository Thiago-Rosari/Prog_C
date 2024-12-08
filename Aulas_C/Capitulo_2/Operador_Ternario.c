/*
* Arquivo: EstruturasCondicionaisOperadorTernario.c
* Autor: Prof. Dr. David Buzatto
*/

#include <stdio.h>
#include <stdlib.h>

int main( void ) 
{
    int n = 20;

    // n é par? se sim, retorna 1, caso contrário, retorna 0
    int v = n % 2 == 0 ? 1 : 0;
    printf("%d", v);
    
    return 0;
}