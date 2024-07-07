/*
            Aula 17
    operador short para o tipo int
    intervalo: -32.768 até 32.767
    %hi ou %d
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y = 0;
    short int x = 32767;

    printf("Tamanho de um int na memoria: %d bytes\n", sizeof y);
    printf("Tamanho de um short int na memoria: %d bytes\n", sizeof x);

    return 0;
}