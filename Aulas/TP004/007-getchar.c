// Aula 007 - Lendo caractera com a função 'getchar()'

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra;

    printf("Digite uma letra: ");
    letra = getchar();  // a variável 'letra' vai receber o retorno da função getchar()

    printf("Caracter lido: %c\n", letra);

    return 0;
}