#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print if the number is positive,negative or 0
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > o)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d id zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
