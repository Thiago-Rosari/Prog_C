// Aula 003 - system("pause");

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

    printf("\nValor retornado: %d\n", printf("Bom"));

    // para manter o terminal aberto no lugar de 'system pause'
    printf("\nPressione 'ENTER' para finalizar.");
    getchar();

    return 0;
}