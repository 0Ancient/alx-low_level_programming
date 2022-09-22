#indluce "main.h"

/**
 * string_toupper - changes all lowercase to uppercase
 * @s: string to be changed
 *
 * Return: pointer address to dest
 */

char *string_toupper(char *s)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0 ; j < i ; j++)
	{
		if (s[j] > 96 && s[j] < 123)
		{
			s[j] = s[j] - 32;
		}
		else
		{
			s[j] = s[j];
		}

	}
	return (s);
}
