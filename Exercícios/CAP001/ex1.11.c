#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int area, d_MAIOR, d_menor;

    printf("Valor da diagonal maior: ");
    scanf("%d", &d_MAIOR);
    printf("Valor da diagonal menor: ");
    scanf("%d", &d_menor);

    area = (d_MAIOR * d_menor) / 2;

    printf("Area = %d\n", area);

    return 0;
}