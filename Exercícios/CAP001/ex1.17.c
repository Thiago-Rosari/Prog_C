#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float base_MAIOR;
    float base_menor;
    float altura;
    float area;

    printf("Valor da base maior: ");
    scanf("%f", &base_MAIOR);
    printf("Valor da base menor: ");
    scanf("%f", &base_menor);
    printf("Valor da altura: ");
    scanf("%f", &altura);

    area = (base_MAIOR + base_menor) * altura / 2;

    printf("Area = %.2f\n", area);


    return 0;
}