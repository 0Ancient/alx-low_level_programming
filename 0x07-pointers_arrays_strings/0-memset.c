#include "main.h"

/**
 * _memset - constant byte fills memory
 * @s: memory block address
 * @b: char used
 * @n: number of bytes
 *
 * Return: pointer to memory block
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
