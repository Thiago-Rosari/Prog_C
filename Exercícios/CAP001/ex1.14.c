#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float lado;
    float area;
    float perimetro;

    printf("Valor do lado: ");
    scanf("%f", &lado);

    area = lado * lado;
    perimetro = lado * 4;

    printf("Perimetro = %.2f\n", perimetro);
    printf("Area = %.2f\n", area);


    return 0;
}