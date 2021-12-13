/*
14. Desenvolva uma função que devolva o número de divisores de um valor inteiro e positivo,
passado como argumento.
Após isso, escreva um programa que leia uma sequência de números inteiros. Sempre que, nessa
sequência, surgir um número primo deve ser escrita no monitor a seguinte mensagem:
“O número que introduziu é primo!”.
O programa termina quando for introduzido um número negativo ou nulo.
*/

#include <stdio.h>

int dividersNumber(int number)
{
	int dividersNumber = 0;

	if (number < 0) return 0;

	for (int i = 1; i <= number; i++)
		if (number % i == 0) dividersNumber++;

	return dividersNumber;
}

int main(void)
{
	int input = 0;

	do
	{
		printf("Input -> ");
		scanf(" %d", &input);
		if (dividersNumber(input) == 2)
			printf("%d é primo o mano!\n", input);
	} while (input > 0);
	
	return 0;
}