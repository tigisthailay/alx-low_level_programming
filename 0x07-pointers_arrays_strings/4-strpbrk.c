#include "main.h"

/**
 * _strpbrk - searches a string for any of ste of byte
 * @s: pointer to string
 * @accept: array of byte to search
 * Return: always success
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (0);
}
