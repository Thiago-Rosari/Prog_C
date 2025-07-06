#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /*
    *   Existem na linguagem C cinco operadores aritméticos;
    *       + : adição
    *       - : subtração
    *       * : multuplicação
    *       / : divisão
    *       % : módulo (resto  da divisão)
    * 
    *     Esses operadores  atuam de forma específica dependendo do tipo numperico
    *   sendo operado. Isso se nota principalmente em relação ao operador / (divisão)
    *   quando atuado em valores inteiros e de ponto flutuante.
    * 
    *     O operador de módulo/resto, que é dedo pelo símbolo %(porcento),
    *   é usado apenas para números inteiros.
    */

    int numeroInteiro1 = 9;
    int numeroInteiro2 = 2;
    float numeroDecimal1 = 9;
    float numeroDecimal2 = 2;

    // resulta em 4
    int divisaoInteira = numeroInteiro1 / numeroInteiro2;
    
    // resulta em 4.5
    float divisaoDecimal = numeroDecimal1 / numeroDecimal2;

    printf("Inteiros: %d / %d = %d\n", numeroInteiro1, numeroInteiro2, divisaoInteira);
    printf("Decimais: %.1f / %.1f = %.1f\n", numeroDecimal1, numeroDecimal2, divisaoDecimal);

    return 0;
}