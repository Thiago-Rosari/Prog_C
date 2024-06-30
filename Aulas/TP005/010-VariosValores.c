// Aula 010 - Lendo vários valores

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3;
    printf("Digite tres numeros inteiros: \n");
    scanf("%d%d%d", &num1, &num2, &num3);

    printf("Valores lidos: %d, %d, %d", num1, num2, num3);

    return 0;
}