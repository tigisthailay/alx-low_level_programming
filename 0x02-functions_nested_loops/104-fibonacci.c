#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int n = 98, c, a = 0, b = 1, i;

	for (i = 1 + 1; i < n; i++)
	{
		printf("%d ", b);
		c = a + b;
		a = b;
		b = c;
	}
	return (0);
}
