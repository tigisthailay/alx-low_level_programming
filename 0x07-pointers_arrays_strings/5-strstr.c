#include "main.h"

/**
 * _strstr - finds first occurrence of substring needle in the string haystack
 * @haystack: input string
 * @needle: input to be searched
 * Return: always success
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}
		if (*j == '\0')
			return (haystack);
	}
	return (NULL);
}
