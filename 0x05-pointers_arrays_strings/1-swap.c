#include "main.h"

/**
* swap_int - swaps two interger values
*@a: first interger
*@b: second interger
*Return: nothing
*/

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
