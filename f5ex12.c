/*
12. Desenvolva uma função que devolva o mínimo múltiplo comum de dois números inteiros
positivos passados como argumento.
*/

#include <stdio.h>

int leastCommonMultiple(int firstNumber,int secondNumber)
{
	int leastCommonMultiple = 1;

	if (firstNumber < 1 || secondNumber < 1)
		return -1;

	while (leastCommonMultiple++)
	{
		if (leastCommonMultiple % firstNumber == 0 && 
			leastCommonMultiple % secondNumber == 0)
		return leastCommonMultiple;
	}
}

int main(void)
{
	int firstNumber, secondNumber;

	printf("First number -> ");
	scanf(" %d", &firstNumber);

	printf("Second number -> ");
	scanf(" %d", &secondNumber);

	if (firstNumber < 1 || secondNumber < 1)
		return -1;

	printf("Mínimo múltiplo comum entre %d e %d é %d \n",
		firstNumber,secondNumber, leastCommonMultiple(firstNumber,secondNumber));

	return 0;
}