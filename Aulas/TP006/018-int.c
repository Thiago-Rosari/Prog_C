/*
            Aula 18
    Tamanho de um int na memória
    intervalo: -2.147.483.648 e 2.147.483.647
    %hi ou %d
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 2147483647;
    

    printf("Valor de x: %d\n", x);
    x++;
    printf("Valor de x: %d\n", x);

    return 0;
}