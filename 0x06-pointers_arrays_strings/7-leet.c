#include "main.h"

/**
 * leet - leet encoder
 * @str: string to encode
 *
 * Return: address of the encoded string
 */

char *leet(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		str[i] = transform(str[i]);
		i++;
	}
	return (str);
}
