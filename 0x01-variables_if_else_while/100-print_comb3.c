#include <stdio.h>
/**
 * main - prints all possible combination of two digits
 * Return: Always 0.
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a < 9; a++)
	{
		for (b = a + 1; b <= 9; b++)
		{
			if (a != b)
			{
				putchar((a % 10) + '0');
				putchar((b % 10) + '0');
				if (a == 8 && b == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
