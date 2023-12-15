#include <stdio.h>

/**
* main - Entry point of the program
*
* A program prints all alphabet exept q & e
*
* Return: 0 on success, non-zero on error
*/
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		if (x == 'e' || x == 'q')
			x++;
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
