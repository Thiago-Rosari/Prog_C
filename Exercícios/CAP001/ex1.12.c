#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float valor;

    printf("Entre com um valor qualquer: ");
    scanf("%f", &valor);

    printf("%f\n%.2f\n%.3f", valor, valor, valor);

    return 0;
}