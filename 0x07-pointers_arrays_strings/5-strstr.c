#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	int needle_len = strlen(needle);

	if (needle_len == 0)
	{
		return (haystack);
	}

	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			if (strncmp(haystack, needle, needle_len) == 0)
			{
				return (haystack);
			}
		}
		haystack++;
	}

	return (0);
}
