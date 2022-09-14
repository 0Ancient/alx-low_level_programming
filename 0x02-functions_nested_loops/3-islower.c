#include "main.h"
/**
 * _islower - function to check a lower case character
 * @c: is the int to use for argument
 * Return:0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
