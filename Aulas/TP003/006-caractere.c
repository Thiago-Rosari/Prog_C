// Aula 006 - Lendo caracteres

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo = 'M';

    printf("Valor da variavel sexo: %c \n", sexo);

    printf("Digite seu sexo: (F,M)\n");
    scanf("%c", &sexo);

    printf("Valor da variavel sexo: %c\n", sexo);

    return 0;
}