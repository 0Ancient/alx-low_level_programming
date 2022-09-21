#include "main.h"
/**
 *  _strncpy - C function to copy string including
 *  terminating null byte, using at most an inputted number of bytes
 *  if the length of source string is less than maximum byte number,
 *  the remainder of destination string is filled with null
 *  works identical to standard lib function 'strncpy'.
 * @dest: buffer stores string copy
 * @src: source string
 * @n: max number of byte copies
 * Return: returns
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
