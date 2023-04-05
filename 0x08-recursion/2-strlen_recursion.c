
#include "main.h"

/**
 * _strlen_recursion - is a function that Returns the length of a string using recursion.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

	return (len);
}
