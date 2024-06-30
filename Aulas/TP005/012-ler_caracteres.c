// Aula 012 - Ler dois caracteres

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a, b;

    printf("Digite duas letras: \n");
    scanf("%c %c",&a, &b);

    // espaço entre os %c -> comando para o computador desconsiderar o ENTER, o TAB e o ESPAÇO.

    printf("Primeira letra: %c\n", a);
    printf("Segunda letra: %c\n", b);

    return 0;
}