/*
        Aula 22
    Operador long para o tipo double
    double -> %lf
    long double -> %Lf

    __mingw_printf();  -> usado para sistema operacional windows

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    long double y = 5.3496487120356814637;

    printf("Valor de y: %Lf\n", y);
    __mingw_printf("Valor de y: %Lf\n", y);
    printf("Um long double precisa de %d bytes de memoria.\n", sizeof y);

    return 0;
}