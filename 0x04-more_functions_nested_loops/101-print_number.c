#include "main.h"

/**
 * print_number - that prints an integer.
 * @n: an input unsigned integer
 * Return: Always 0.
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		print_unsigned_int(-(unsigned int)n);
	}
	else
	{
		print_unsigned_int(n);
	}
}

/**
 * print_unsigned_int - prints unsigned integer
 * @n: un;signed number
 * Return: success
 */
void print_unsigned_int(unsigned int n)
{
	if (n / 10)
	{
		print_unsigned_int(n / 10);
	}
	_putchar((n % 10) + '0');
}
