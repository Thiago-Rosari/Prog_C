#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n1, n2, n3;

    printf("Entre com 3 numeros: \n");

    printf("N1: ");
    scanf("%d", &n1);
    printf("N2: ");
    scanf("%d", &n2);
    printf("N3: ");
    scanf("%d", &n3);
    
    // bloco 1 ___________________________
    if (n1 <= n2 && n2 <= n3)
    {
        printf("%d, %d, %d", n1, n2, n3);
    } 
    else if(n1 <= n3 && n3 <= n2)
    {
        printf("%d, %d, %d", n1, n3, n2);
    }
    // bloco 2 ___________________________
    else if(n2 <= n1 && n1 <= n3)
    {
        printf("%d, %d, %d", n2, n1, n3);
    }
    else if(n2 <= n3 && n3 <= n1)
    {
        printf("%d, %d, %d", n2, n3, n1);
    }
    // bloco 3 ___________________________
    else if(n3 <= n1 && n1 <= n2)
    {
        printf("%d, %d, %d", n3, n1, n2);
    }
    else if(n3 <= n2 && n2 <= n1)
    {
        printf("%d, %d, %d", n3, n2, n1);
    }
    

    return 0;
}