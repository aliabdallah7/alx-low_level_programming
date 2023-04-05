#include "main.h"
#include <string.h>

int is_palindrome_helper(char *s, int start, int end);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 * @i: iterator
 * Return: 1 if it is, 0 it's not
 */

int is_palindrome(char *s)
{
	int length = strlen(s);
	return is_palindrome_helper(s, 0, length-1);
}

/*
 * is_palindrome_helper - compares the characters at the start and end.
 */

int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	else if (s[start] != s[end])
	{
		return (0);
	}
	else
	{
		return is_palindrome_helper(s, start+1, end-1);
	}
}
