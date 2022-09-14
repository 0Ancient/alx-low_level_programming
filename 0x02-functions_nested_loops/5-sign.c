#include "main.h"
/**
 * print_sign - function checking for a number
 * @n: into to use for argument function
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
}
	else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else
	{
	_putchar(0);
	return (0);
	}
}
