#include <stdlib.h>
#include <string.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, z;
	size_t total_length;
	char *new_str;
	int new_str_index;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	total_length = 0;
	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1;
	}

	new_str = malloc(total_length * sizeof(char));
	if (new_str == NULL)
	{
		return (NULL);
	}

	new_str_index = 0;
	for (z = 0; z < ac; z++)
	{
		strcpy(&new_str[new_str_index], av[z]);
		new_str_index += strlen(av[z]);
		new_str[new_str_index] = '\n';
		new_str_index++;
	}

	new_str[new_str_index] = '\0';

	return (new_str);
}
