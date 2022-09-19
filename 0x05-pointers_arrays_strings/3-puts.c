#include "main.h"
#include <stdio.h>

/**
 *_puts - prints a string
 * @str: string to print
 *
 * Description: prints string
 * On success: returns no error
 */

void _puts(char *str)
{
	int 1 = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
