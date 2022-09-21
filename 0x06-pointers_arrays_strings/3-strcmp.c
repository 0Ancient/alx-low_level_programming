#include "main.h"

/**
 *  _strcmp - function to compare two strings
 * @s1: string one
 * @s2: string two
 * Return:
 * 		returns zero if s1 == s2
 * 		returns negative number if s1 < s2
 * 		returns positive number if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, diff = 0;

	while (1)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			break;
		esle if (s1[i] == '\0')
		{
			diff = s2[i];
			break;
		}
		else if (s2[i] == '\0')
		{
			diff = s1[i];
			break;
		}
		else if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}
		else
			i++;

	}
	return (diff);
}
