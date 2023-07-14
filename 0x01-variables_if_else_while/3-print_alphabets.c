#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase, followed by a new line.
 *
 * return: 0 – if successful.
 */

int main(void)
{
char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}

