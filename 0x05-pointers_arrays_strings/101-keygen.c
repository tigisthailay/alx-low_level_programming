#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate random valid password
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	char k[200];
	int n = 0;
	int randm = 0;
	char *key = k;

	srand(time(NULL));

	while (n < 2645)
	{
		randm = rand() % 122;

		if (randm > 32)
		{
			*key = randm;
			key = key + 1;
			n += randm;
		}
	}
	*key = (2772 - n);
	*(key + 1) = '\n';
	printf("%s", k);
	return (0);
}
