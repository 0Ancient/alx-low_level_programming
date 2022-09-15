#include "main.h"

/**
 * _isupper - checks if characters are upper case
 * @c: character tested
 * Return: 1 if it is, otherwise 0
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return(1);
	}
	return(0);
}
