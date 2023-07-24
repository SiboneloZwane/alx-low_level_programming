#include "main.h"
/**
 * _strlen - returns the length of a string
 * string: s
 * Return: length
 */
int _strlen(char *s)
{
	int how_long = 0;

	while (*s != '\0')
	{
		how_long++;
		s++;
	}

	return (how_long);
}
