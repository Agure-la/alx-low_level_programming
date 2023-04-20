#include "main.h"

/**
 * print_name the function that prints name
 * @name: the name to be printed
 * @f: pointer to the function
 */
void print_name(char *name, void(*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
