#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int lado;
    int area;
    int perimetro;

    printf("Digite o valor do lado do quadrado: ");
    scanf("%d", &lado);

    area = lado * lado;
    perimetro = lado * 4;

    printf("Perimetro = %d\n", perimetro);
    printf("Area = %d\n", area);

    return 0;
}