#include <stdio.h>

/**
* main - Entry point of the program
*
* A program prints all alphabet letters
*
* Return: 0 on success, non-zero on error
*/
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}

	putchar('\n');
	return (0);
}
