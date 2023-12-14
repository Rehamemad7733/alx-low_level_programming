#include <unistd.h>

/**
* main - entry
*
* Description: C program that prints exactly specific qoute
*
* Return: 1 (fail)
*/

int main(void)
{
	char x[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, x, 59);
	return (1);
}
