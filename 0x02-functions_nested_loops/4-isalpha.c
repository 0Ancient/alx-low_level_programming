#include "main.h"
/**
 * _isalpha - function to check case for c
 * @c: int to check function argument
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
	{
	return (1);
	}
	else
	return (0);
}
