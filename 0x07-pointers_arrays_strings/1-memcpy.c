#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: memory area destination
 * @src: origin memory area
 * @n: copied number of bytes
 *
 * Return: pointer to destination memory block
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	
	return (dest);
}
