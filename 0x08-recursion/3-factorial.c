#include "main.h"

/**
 * Factorial - returns the factorial of a number
 * Number to return the factorial from: @n
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
