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

	for (int i = 0; s[i] != '\0'; i++)
	{
		int match = 0;

		for (int j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				match = 1;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (count);
		}
		if (match == 0)
		{
			return (count);
		}
	}

	return (count);
}
