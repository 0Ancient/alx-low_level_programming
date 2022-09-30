#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments passed to funtion
 * @argv: argument vector of pointers to strings
 *
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
