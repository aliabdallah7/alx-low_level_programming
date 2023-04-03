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

	for (int i = 0; s[i] != '\0'; i++)
	{
		for (counterLoop = 0; accept[counterLoop]; counterLoop++)
		{
			if (s[i] == accept[counterLoop])
			{
				counterLoop++;
				break;
			}
			else if (accept[counterLoop + 1] == '\0')
				return (count);
		}
	}
	return (count);
}
