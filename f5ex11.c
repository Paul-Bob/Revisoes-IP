/*
11. Desenvolva uma função que leia um conjunto de números inteiros e devolva o número de
vezes que o valor máximo surgiu. A dimensão da sequência é passada como argumento.
*/

#include <stdio.h>

int nrOfMaxValueFromInputs(int nrOfInputs)
{
	int input = 0;
	int maxValue = 0;
	int nrOfMaxValue = 1;

	if (nrOfInputs < 1) return 0;

	printf("Input -> ");
	scanf(" %d", &maxValue);

	while (--nrOfInputs)
	{
		printf("Input -> ");
		scanf(" %d", &input);
		if (input > maxValue)
		{
			maxValue = input;
			nrOfMaxValue = 1;
		}
		else if (input == maxValue)
			nrOfMaxValue++;
	}
	return nrOfMaxValue;
}

int main(void)
{
	int nrOfInputs = 0;

	printf("Number of inputs -> ");
	scanf(" %d", &nrOfInputs);

	printf("Valor máximo surgiu %d vezes.\n",
	 nrOfMaxValueFromInputs(nrOfInputs));

	return 0;
}