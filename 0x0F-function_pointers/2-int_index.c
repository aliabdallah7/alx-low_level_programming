#include "function_pointers.h"
/**
 * int_index - return index place if comparison = true, else -1
 * @array: array
 * @size: size of elements in array
 * @cmp: pointer to func of one of the 3 in main
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int counter;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (counter = 0; counter < size; counter++)
	{
		if ((*cmp)(array[counter]))
		{
			return (counter);
		}
	}
	return (-1);
}
