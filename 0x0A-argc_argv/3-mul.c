
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int number, number1, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	number = atoi(argv[1]);
	number1 = atoi(argv[2]);
	product = number * number1;

	printf("%d\n", product);

	return (0);
}
