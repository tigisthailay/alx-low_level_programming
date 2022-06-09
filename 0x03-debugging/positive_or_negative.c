/** #include <stdio.h>
#include <stdlib.h>
#include <time.h>*/
#include "main.h"
/**
 * main - The entry point of my program
 *
 * Return: Always 0.
 */

void positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{

		printf("0 is zero\n");
	}
}
