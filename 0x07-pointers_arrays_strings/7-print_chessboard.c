#include "main.h"

/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	char *p = &a[0][0];
	int i;

	for (i = 0; i < 8; i++, p++)
	{
		_putchar(*p);
	}
	_putchar('\0');
}

