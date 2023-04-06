#include "main.h"
int is_prime_helper(int n, int i);
/**
 * is_prime_helper - recursive helper function
 * to determine if a number is prime
 * @n: number to evaluate
 * @i: divisor to check
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_helper(int n, int i)
{
	if ((n < 2) || (n % 2 == 0) || (n % i == 0))
		return (0);
	else if (n == 2 || i > n / 2)
		return (1);
	else
		return (is_prime_helper(n, i + 2));
}

/**
 * is_prime_number - determines if a number is prime using recursion
 * @n: number to evaluate
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{ return (is_prime_helper(n, 3)); }
