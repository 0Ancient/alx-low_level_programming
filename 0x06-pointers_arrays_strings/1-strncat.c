#include "main.h"

/**
 * _strncat - concatenates strings but adds input number bytes
 * @dest: appended string
 * @src: string completed at the end of dest
 * @n: interger parameter to compare index
 * Return: new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);

}
