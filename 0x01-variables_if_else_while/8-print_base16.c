#include <stdio.h>

/**
 * main – Prints out the numbers between 0 to 9 and the letters between a to f.
 *
 * return: 0 – if successful.
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

