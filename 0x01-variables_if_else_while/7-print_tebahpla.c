#include <stdio.h>

/**
 * main - Prints out the lowercase alphabet in reverse.
 * 
 * return: 0 – if successful.
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

