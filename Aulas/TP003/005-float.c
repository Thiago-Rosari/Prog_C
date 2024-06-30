// Aula 005 - Lendo números reais

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num = 3.1415;

    printf("Valor da minha variavel: %.4f\n", num);

    printf("Digite um numero real: ");
    scanf("%f", &num);

    printf("Valor digitado: %.3f", num);

    return 0;
}