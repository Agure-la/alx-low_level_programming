#include "kk.h"
#include <unistd.h>

int _putchar(char c)
{
	int i;
	char p[] = "_putchar";

	for (i = 0; i < 8; i++)
		{
		_putchar(p[i]);
		}
		_putchar('\n');
	return (0);
}
