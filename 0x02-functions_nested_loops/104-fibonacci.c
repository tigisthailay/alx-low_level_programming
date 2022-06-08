#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	int fib[98];

	fib[0] = 1;
	fib[1] = 2;
	printf(", , ", fib[0], fib[1]);

	for (i = 2; i < 98; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
		if (i == 97)
		{
			printf("\n", fib[i]);
		}
		else
		{
			printf(", ", fib[i]);
		}
	}
	return (0);
}