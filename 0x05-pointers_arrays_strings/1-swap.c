#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * integer to swap: a
 * integer to swap: b
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
