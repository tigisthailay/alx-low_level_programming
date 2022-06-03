#include <stdio.h>
/**
 * main - printing two digit numbers
 * Return: Always 0.
 */
int main(void)
{
	int p, q;

	for (p = 0; p <= 98; p++)
	{
		for (q = p + 1; q <= 99; q++)
		{
			putchar(p);
			putchar(q);

			if (p == 98 && q == 99)
				continue;
			putchar(',');
			putchar (' ');
		}
	}
	putchar('\n');
	return (0);
}
