#include "main.h"

int helper(int n, int i);

/**
 * helper - recursive helper function for _sqrt_recursion
 * @n: number to calculate the sqaure root of
 * @i: iterator
 * Return: the natural square root of a number.
 */
int helper(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (helper(n, i + 1));
	}
}

/**
 * _sqrt_recursion - calculates the natural square root of a number
 * @n: number to calculate the sqaure root of
 * Return: the natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (helper(n, 1));
	}
}
