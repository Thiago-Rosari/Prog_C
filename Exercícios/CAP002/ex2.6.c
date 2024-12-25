#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1;

    printf("Entre com um valor: ");
    scanf("%f", &n1);

    if(n1 >= 20) {
        printf("A metade de %.2f e: ", n1);
        printf("%.2f", n1 / 2);
    } else {
        printf("O triplo de %.2f e: ", n1);
        printf("%.2f", n1 * 3);
    }


    return 0;
}