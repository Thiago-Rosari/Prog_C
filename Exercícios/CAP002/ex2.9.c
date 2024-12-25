#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float quant, medida, res;

    printf("Entre com a quantidade de lados: ");
    scanf("%f", &quant);
    printf("Entre com a medida de lado: ");
    scanf("%f", &medida);

    if(quant == 3) {
        res = quant * medida;
        printf("TRIANGULO de perimmetro %.2f", res);
    } else if(quant == 4) {
        res = medida * medida;
        printf("QUADRADO de area %.2f", res);
    } else if(quant == 5) {
        printf("PENTAGONO ");
    } else {
        printf("Poligono nao identificado");
    }

    return 0;
}