#include "shell.h"

/**
 * _strlen - finds the length of string
 * @s: string to find length
 * Return: string length of string passed
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		++i;
	}
	return (i);
}
