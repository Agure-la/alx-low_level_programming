

#include <stdio.h>

/**
 * main - Prints all arguments it receives.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int no_arg;

	for (no_arg = 0; no_arg < argc; no_arg++)
		printf("%s\n", argv[no_arg]);

	return (0);
}
