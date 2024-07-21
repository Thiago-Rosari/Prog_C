#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int primeiro;
    int segundo;
    int soma;
    int sub;
    int multi;
    int divi;

    // dados
    printf("Primeiro numero: ");
    scanf("%d", &primeiro);
    printf("Segundo numero: ");
    scanf("%d", &segundo);
    // processamento
    soma = primeiro + segundo;
    sub = primeiro - segundo;
    multi = primeiro * segundo;
    divi = primeiro / segundo;
    // saída
    printf("%d + %d = %d\n", primeiro, segundo, soma);
    printf("%d - %d = %d\n", primeiro, segundo, sub);
    printf("%d * %d = %d\n", primeiro, segundo, multi);
    printf("%d / %d = %d\n", primeiro, segundo, divi);

    return 0;
}