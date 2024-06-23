// exercício 001
// Ler sexo, idade, peso e altura
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo;
    int idade;
    float peso, altura;

    printf("Digite a sua idade, peso, altura e sexo: \n");
    scanf("%d %f %f %c", &idade, &peso, &altura, &sexo);

    printf("Idade: %d\nPeso: %.1f\nAltura: %.2f\nSexo: %c\n", idade, peso, altura, sexo);

    return 0;
}