#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float D_MAOIR;
    float d_menor;
    float area;

    printf("Valor da diagonal maior: ");
    scanf("%f", &D_MAOIR);
    printf("Valor da diagonal menor: ");
    scanf("%f", &d_menor);

    area = (D_MAOIR * d_menor) / 2;

    printf("Area = %.2f\n", area);

    return 0;
}