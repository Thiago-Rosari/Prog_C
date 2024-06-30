// Aula 009 - Lendo caractera com a função 'fgetc()'

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra;

    printf("Digite uma letra: ");
    letra = fgetc(stdin); // fgetc = file (arquivos)

    printf("Caracter lido: %c", letra);

    return 0;
}