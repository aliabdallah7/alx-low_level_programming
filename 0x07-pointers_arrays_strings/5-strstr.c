#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;
		while (*h == *n && *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return haystack;

		haystack++;
	}
	return (0);
}
