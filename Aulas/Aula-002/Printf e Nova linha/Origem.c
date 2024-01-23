#include <windows.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	// caractere de escape para saltar uma linha -> \n
	// função de saída -> printf

	printf("Olá! Seja bem vindo!\n\n");


	return 0;
}