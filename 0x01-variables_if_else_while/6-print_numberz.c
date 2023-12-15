#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print 0-9 using putchar
 *              while using int variable
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int h = 0;

	while (h <= 9)
	{
		/*convert h to ASCII representation*/
		putchar(h + '0');
		h++;
	}
	putchar('\n');

	return (0);
}
