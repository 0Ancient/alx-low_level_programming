#include "main.h"

/**
 * _isupper - checks if characters are uppercase or not
 * @c: character tested
 * Return: 1 whether it is, 0 otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return(1);
	}
	return(0);
}
