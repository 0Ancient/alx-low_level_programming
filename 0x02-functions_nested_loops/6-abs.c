#include "main.h"
#include <stdio.h>
/**
 * _abs - function computing absolute value of integer
 * @c: is int for argument of function
 * Return: 0
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
	return (c);
	}
	else
	return (c * -1);
}
