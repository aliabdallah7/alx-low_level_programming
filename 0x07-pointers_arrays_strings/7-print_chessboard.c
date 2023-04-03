#include "main.h"

/**
 * print_chessboard - Entry point
 * @a: 2d_array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	char *p = &a[0][0];
	int i;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(*p);
			p++;
		}
		_putchar('\n');
	}
}
