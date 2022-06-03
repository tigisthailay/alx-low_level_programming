#include <stdio.h>
/**
 * main - print all alphabets in reverse order
 * Return: Always 0.
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
