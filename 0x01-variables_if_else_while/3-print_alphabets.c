#include <stdio.h>

/**
* main - Entry point of the program
*
* A program prints alphabet in lowercase , and then in uppercase
*
* Return: 0 on success, non-zero on error
*/

int main(void)
{
	char x = 'a';
	char y = 'A';

	/*prints a - z*/
	while (x <= 'z')
	{
		putchar(x);
		x++;
	}

	/*print A - Z*/
	while (y <= 'Z')
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
