#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra;

    printf("Digite uma letra: ");
    letra = getc(stdin); // stdin = entrada padrão do teclado

    printf("Caracter lido: %c", letra);

    return 0;
}