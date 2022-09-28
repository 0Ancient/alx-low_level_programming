#include "main.h"

/**
 * is_prime_number -  returns 1 if the input integer is a prime number
 * @n: number checked
 *
 * Return: 1 if number is prime, zero otherwise
 */

int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, start));
}

/**
 * is_prime - returns 1 if number is prime
 * @n: number chacked
 * @start: where to start checking
 *
 * Return: returns 1 if number is prime, otherwise zero
 */

int is_prime(int n, int start)
{
	if (start <= 1)
		return (1);
	else if (n % start == 0)
		return (0);
	return (is_prime(n, start - 1));
}
