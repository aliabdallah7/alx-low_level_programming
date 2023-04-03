#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to pointer
 * @to: pointer char
 */

void set_string(char **s, char *to)
{
	*s = (char*) malloc(strlen(to) + 1);  // Allocate memory for the string
	strcpy(*s, to);  // Copy the string to the allocated memory
}
