#include <stdio.h>
/*
 * main
 * return
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	
	return (0);
}
