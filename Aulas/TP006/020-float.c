/*
        Aula 20
    Tamanho de um float na memória
    %f
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x = 3.1415;

    printf("Um float precisa de %d bytes de memoria.\n", sizeof x);

    return 0;
}