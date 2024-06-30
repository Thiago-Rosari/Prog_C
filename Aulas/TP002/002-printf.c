// Aula 002 - Função printf e nova linha

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // printf é uma função de saída
    // \n é para saltar uma linha
    
    printf("Ola. Seja bem vindo! \n");

    printf("\n---------------------------------------\n\n");
    printf("1 - Logar  2 - Cadastrar  3 - Imprimir\n");
    printf("\n---------------------------------------\n\n");

    printf("\nValor retornado: %d", printf("Bom"));

    return 0;
}