#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // comentários de múltiplas linhas iniciam com /* e terminam com */

    /* 
      O caractere \ (contra barra) é usado para "escapar" caracteres
      especiais. Os principais são \n e \t servindo, respectivamente,
      para pular uma linha do console e continuar a saída de texto
      no ínicio da próxima linha e para inserir um caractere de
      tabulação.
    */

   printf("Thiago\n");
   printf("Macial\n");
   printf("\tEssa linha inicia tabulada!");

   return 0;
}