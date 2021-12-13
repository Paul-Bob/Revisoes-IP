/*
7. Desenvolva uma função que desenhe no monitor um triângulo de números, invertido. O número
de linhas é passado como argumento da função. É garantido que o seu valor é superior a 1 e
inferior ou igual a 9. Na figura pode ver-se um exemplo para um triângulo com 5 linhas. No
desenho do triângulo, em cada uma das linhas o valor do número aumenta até à coluna central e a
partir daí diminui.
1 2 3 4 5 4 3 2 1
  1 2 3 4 3 2 1
    1 2 3 2 1
      1 2 1
        1
*/

#include <stdio.h>

#define MIN_LINES 2
#define MAX_LINES 30

int countDigits(int number)
{
	int count = 0;
	do 
	{
	number /= 10;
	++count;
	} 
	while (number != 0);
	return count;
}

void printInvertedTriangle(int numberOfLines)
{
	int spaces = 0, numberOfDigits = 0;

	if (numberOfLines < MIN_LINES || numberOfLines > MAX_LINES)
		return;

	do
	{
		for (int i = 0; i < spaces; i++)
			putchar(' ');

		for (int number = 1; number <= numberOfLines; number++)
			printf("%d ", number);

		for (int number = numberOfLines - 1; number > 0; number--)
			printf("%d ", number);

		putchar('\n');


		spaces += (1 + countDigits(numberOfLines));
	} 
	while(numberOfLines--);
}

int main(int argc, char const *argv[])
{
	int numberOfLines;

	do
	{
		printf("Number of lines -> ");
		scanf(" %d", &numberOfLines);
	} while (numberOfLines < MIN_LINES || numberOfLines > MAX_LINES);

	printInvertedTriangle(numberOfLines);

	return 0;
}