#include <stdio.h>

/**
 * main - print all numbers base 10 with out using any char var
 *
 * Return: Always 0
 */

int main(void)
{
	int n;

	for  (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	putchar('\n');

	return (0);
}
