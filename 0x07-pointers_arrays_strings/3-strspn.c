#include "main.h"

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int counterLoop;

	while (*s)
	{
		for (counterLoop = 0; accept[counterLoop]; counterLoop++)
		{
			if (*s == accept[counterLoop])
			{
				counterLoop++;
				break;
			}
			else if (accept[counterLoop + 1] == '\0')
				return (count);
		}
	s++;
	}
	return (count);
}
