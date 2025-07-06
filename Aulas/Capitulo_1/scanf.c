#include <stdio.h>
#include <stdlib.h>

int main(void)
{

/* 
*   Para realizar a entrada de dados em um programa pelo dispositivo de entrada padrão configurado no 
*   sistema operacional (usualmente o teclado) usa-se a função scanf.
*   Essa função funcionará de forma parecida que a função printf, entretanto, 
*   ao invés de direcionar o valor de uma variável para a saída padrão, ela direcionará o valor
*   fornecido através da entrada padrão para uma variável.
*   Os especificadores de formato utilizados na função printf também são usados na função scanf.
*
*   *** ATENÇÃO! ***
*   Cuidado ao usar %c na função scanf. Preceda o especificador com um caractere de espaço!
*   Por exemplo, scanf( " %c", &suaVariavel );
*/

    char primeiraLetra;
    int idade;
    float peso;
    float altura;
    float imc;

    printf("Entre com a primeira letra do seu nome: ");
    scanf(" %c", &primeiraLetra);

    printf("Entre com sua idade: ");
    scanf("%d", &idade);

    printf("Entre com seu peso: ");
    scanf("%f", &peso);

    printf("Entre com sua altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("%c, seu IMC e: %.2f", primeiraLetra, imc);


    return 0;
}