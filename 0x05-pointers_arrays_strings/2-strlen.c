#include "main.h"

/**
 * _strln - returns string length
 * @s: string
 * Return: return length as interger
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
