#include <stdio.h>

/**
* main - Entry point of the program
*
* A program prints 0 - 9
*
* Return: 0 on success, non-zero on error
*/
int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		printf("%i", x);
		x++;
	}
	putchar('\n');
	return (0);
}
