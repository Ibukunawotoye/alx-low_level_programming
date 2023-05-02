#include "main.h"

/*
 * swap_int - swaps the values of two integers
 * @b: int a
 * @a: int b
 */
void swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;
}
