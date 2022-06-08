#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int t1 = 0, t2 = 1, t3 = 1, n = 98;

	t3 = t1 + t2;

	while (t3 <= n)
	{
		printf(t3);
		printf(',');
		prinf(' ');
		t1 = t2;
		t2 = t3;
		t3 = t1 + t2;
	}
	return (0);
}
