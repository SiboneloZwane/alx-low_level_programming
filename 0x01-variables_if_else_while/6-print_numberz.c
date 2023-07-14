#include <stdio.h>

/**
 * main - Prints out the all single digit numbers from 0 to 9.
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
	putchar('\n');
	return (0);
}

