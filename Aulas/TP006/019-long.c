/*
            Aula 19
    Operador long para o tipo int
    %li ou %ld
    Operador long long para o tipo int
    %lld ou %lli
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int x = 2147483647;
    
    printf("Tamanho de x em bytes: %d\n", sizeof x);

    printf("Valor de x: %lld\n", x);
    x++;
    printf("Valor de x: %lli\n", x);

    return 0;
}