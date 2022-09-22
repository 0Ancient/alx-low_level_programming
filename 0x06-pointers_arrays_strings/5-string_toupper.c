#indluce "main.h"

/**
 * string_toupper - changes all lowercase to uppercase
 * @str: string changed
 *
 * Return: address to string
 */

char *string_toupper(char *)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}

	return (str);
}
