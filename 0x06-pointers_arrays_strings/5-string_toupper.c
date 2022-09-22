#indluce "main.h"

/**
 * string_toupper - changes all lowercase to uppercase
 * @str: string to be changed
 *
 * Return: pointer address to dest
 */

char *string_toupper(char *str)
{
	int count = 0;

	while (*(str + count) != '\0')
	{
		if ((*(str + count) >= 97) && (*(str + count) <= 122))
			*(str + count) = *(str + count) - 32;
		count++;
	}

	return (str);
}
