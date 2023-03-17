#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char character_s;
	int integer_s;
	long long_s;
	long long long_sl;
	float float_s;

	printf("Size of a char: %lu byte(s)\n", sizeof(character_s));
	printf("Size of an int: %lu byte(s)\n", sizeof(integer_s));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long_s));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long_sl));
	printf("Size of a float: %lu byte(s)\n", sizeof(float_s));

	return (0);
}
