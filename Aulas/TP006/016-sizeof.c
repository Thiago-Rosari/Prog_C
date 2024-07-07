// Aula 16 - Operador sizeof
// sizeof X sizeof(int)

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x = 1.0;

    printf("Tamanho de um float na memoria: %d bytes\n", sizeof x);
    printf("Tamanho de um int na memoria: %d bytes\n", sizeof(int));

    return 0;
}