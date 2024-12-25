#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, soma,  sub;

    printf("Entre com um numero: ");
    scanf("%f", &n1);
    printf("Entre com outro numero: ");
    scanf("%f", &n2);

    soma = n1 + n2;
    sub = n1- n2;

    if(soma > 10) {
        printf("Os numeros fornecidos foram %.2f e %.2f", n1, n2);
    } else {
        printf("A subtracao entre %.2f e %.2f e igual a %.2f: ", n1, n2, sub);
    }

    return 0;
}