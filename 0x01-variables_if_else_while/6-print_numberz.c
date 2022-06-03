#include <stdio.h>
/*
 * main : return 1-0 with out char
 * return: always 0.
 */
int main(void)
{
	int n;

	for  (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	putchar('\n');

	return (0);
}
