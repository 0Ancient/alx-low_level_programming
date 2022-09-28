#include "main.h"

/**
 * is_palindrome - returns 1 if a string is a palindrome
 * @s: string checked
 *
 * Return: 1 if is palindrome, or 0
 */

int is_palindrome(char *s)
{
	int flag = 1;

	check(s, 0, _strlen_recursion(s) - 1, &flag);
	return (flag);
}

/**
 * check - checks if string is palindrome
 * @s: string checked
 * @start: start index
 * @end: end index
 * @flag: to indicate is palindrome
 *
 * Return: void
 */

void check(char *s, int start, int end, int flag)
{
	if (start <= end)
	{
		if (s[start] == s[end])
			*flag *= 1;
		else
			*flag *= 0;
		check(s, start + 1, end - 1, flag);
	}
}

/**
 * _strlen_recursion - claculates string length
 * @s: string calculated
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s != '\0')
	{
		sum++;
		sum += _strlen_recusion(s + 1);
	}
	return (sum);
}
