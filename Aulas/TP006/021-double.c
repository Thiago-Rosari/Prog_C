/*
        Aula 21
    Tamanho de um double na memória
    %lf
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x = 3.1415;
    double y = 5.3496487120356814637;

    printf("Um float precisa de %d bytes de memoria.\n", sizeof x);
    printf("Um double precisa de %d bytes de memoria.\n", sizeof y);

    return 0;
}