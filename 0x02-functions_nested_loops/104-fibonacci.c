#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int co;
	unsigned long fb1 = 0, fb2 = 1, sum;
	unsigned long i, j, k, m;
	unsigned long x, y;

	for (co = 0; co < 92; co++)
	{
		sum = fb1 + fb2;
		printf("%lu, ", sum);

		fb1 = fb2;
		fb2 = sum;
	}
	i = fb1 / 10000000000;
	k = fb2 / 10000000000;
	j = fb1 % 10000000000;
	m = fb2 % 10000000000;

	for (co = 93; co < 99; co++)
	{
		x = i + k;
		y = j + m;

		if (j + m > 9999999999)
		{
			x = x + 1;
			y = y % 10000000000;
		}
		printf("%lu%lu", x, y);
		if (co != 98)
			printf(",");
		i = k;
		j = m;
		k = x;
		m = y;
	}
	printf("\n");
	return (0);
}
