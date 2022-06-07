#include "main.h"

/**
 * main - Entry point.
 *
 * Return: Always 0.
 *
 */
int main(void)
{
	char *tg = "_putchar";

	while (*tg)
	{
		_putchar(*tg);
		tg++;
	}
	_putchar('\n');
	return (0);
}
