#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int baseMAIOR, base_menor;
    int altura;
    int area;

    printf("Valor da base maior: ");
    scanf("%d", &baseMAIOR);

    printf("Valor da base menor: ");
    scanf("%d", &base_menor);

    printf("Valor da altura: ");
    scanf("%d", &altura);

    area = (baseMAIOR + base_menor) * altura / 2;

    printf("Area = %d\n", area);

    return 0 ;
}