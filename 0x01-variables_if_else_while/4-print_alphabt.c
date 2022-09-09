#include <stdio.h>
/**
 * main - print if positive, zero, or negative
 *
 *Description: use main function
 *program prints "programming is positive, zero, or negative
 *Return: 0
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
if (ch != 'e' && ch != 'q')
{
	putchar(ch);
}
}
putchar('\n');
return (0);
}
