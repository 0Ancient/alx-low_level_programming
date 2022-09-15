#include "main.h"

/**
 * _isdigit - checks if characters are digits or not
 * @c: character tested
 * Return: 1 when it is, 0 otherwise
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}

	return (0);
}
