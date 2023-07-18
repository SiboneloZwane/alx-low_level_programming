#include "main.h"

/**
 * print_alphabet -  prints the alphabet, in lowercase, followed by a new line.
 */

void print_alphabet(void)
{
    char lowercase_letter;

    for (lowercase_letter = 'a'; lowercase_letter <= 'z'; lowercase_letter++)
        _putchar(lowercase_letter);

    _putchar('\n');
}
