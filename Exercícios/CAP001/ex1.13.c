#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float primeiro;
    float segundo;
    float soma;
    float sub;
    float multi;
    float divi;

    // dados
    printf("Primeiro numero: ");
    scanf("%f", &primeiro);
    printf("Segundo numero: ");
    scanf("%f", &segundo);
    
    // processamento
    soma = primeiro + segundo;
    sub = primeiro - segundo;
    multi = primeiro * segundo;
    divi = primeiro / segundo;
    // saída
    printf("%.2f + %.2f = %.2f\n", primeiro, segundo, soma);
    printf("%.2f - %.2f = %.2f\n", primeiro, segundo, sub);
    printf("%.2f * %.2f = %.2f\n", primeiro, segundo, multi);
    printf("%.2f / %.2f = %.2f\n", primeiro, segundo, divi);

    return 0;
}