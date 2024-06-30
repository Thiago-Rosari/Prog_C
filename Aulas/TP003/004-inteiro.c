// Aula 004 - Lendo números inteiros

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor, valor2;
    //valor = 50;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    printf("Digite um segundo valor inteiro: ");
    scanf("%d", &valor2);

    printf("Primeiro valor: %d \nSegundo valor: %d\n", valor, valor2);



    return 0;
}