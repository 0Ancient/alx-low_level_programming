#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds numbers
 * @argc: arguments passed to function
 * @argv: vector of pointers to strings
 *
 * Return: 0 or else 1
 */

int main(int argc, char *argv[])
{
	int i, j;
	unsigned long int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; *(argv[i] + j) != '\0'; j++)
			{
			if (argv[i][j] >= '0' && argv[i][j] <= '9')
				continue;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%lu\n", sum);

}
return (0);
}
