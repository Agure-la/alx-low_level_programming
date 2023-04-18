#include <stdio.h>

/**
 * prints the name of complition file followed by a new line
 * Then it return:0
 **/
int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return(0);
}
