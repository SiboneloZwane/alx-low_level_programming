#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
	char lowercase_letter;
	int i;

	i = 0;

	while (i < 10)
	{
		lowercase_letter = 'a';
		while (lowercase_letter <= 'z')
		{
			_putchar(lowercase_letter);
			lowercase_letter++;
		}
		_putchar('\n');
		i++;
	}
}
