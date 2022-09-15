#include <stdio.h>
#include "main.h"

/**
 * print_line - prints straight line
 * @n: character
 * Return: returns nothing
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		putchar('_');
	}
	putchar('\n');
}
