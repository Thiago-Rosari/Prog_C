#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3, soma;

    printf("N1: ");
    scanf("%f", &n1);

    printf("N2: ");
    scanf("%f", &n2);

    printf("N3: ");
    scanf("%f", &n3);

    if(n1 > n3 && n2 > n3) {
        soma = n1 + n2;
        printf("A soma dos dois maiores numeros oferecidos e: %.2f", soma);
    } else if (n1 > n2 && n3 > n2) {
        soma = n1 + n3;
        printf("A soma dos dois maiores numeros oferecidos e: %.2f", soma);
    } else if (n2 > n1 && n3 > n1) {
        soma = n2 + n3;
        printf("A soma dos dois maiores numeros oferecidos e: %.2f", soma);
    }
    

    return 0;
}