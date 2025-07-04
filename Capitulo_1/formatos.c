#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    /* 
    A função printf é capaz de interpolar dados dentro
     do texto (string) que irá imprimir na saída padrão.

    Para isso, é necessário marcar posições dentro da string
     usando o caractere % (porcento) e utilizar um especificador
     de formato específico para cada tipo de variável.

    Os specificadores de formato que serão usados por enquanto são:
        %d: para variáveis inteiras (int)
        %c: para variáveis de caracteres (char)
        %f: para variáveis decimais (float)

    Alguns especificadores possuem opções de formatação.
     por exemplo, para fixar a quantidade de casas decimais
     que serão exibidas para uma variável float, usa-se:
     %.nf: onde "n" é a quantidade de casas decimais.

    Exemplo: %.2f => o valor da variável float será formatado usando duas casas decimais
    */

    float pi = 3.1415;
    float raio = 20.78;
    float circuferencia = 2 * pi * raio;
    float area = pi * raio * raio;

    printf("Ocirculo de reio %f tem: \n", raio);
    printf("\tCircuferencio = %.2f\n", circuferencia);
    printf("\tArea = %.2f\n", area);

    return 0;
}