#include "main.h"

/**
 *main:print_alphabet- prints the alphabe followed by a new line.
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char y = 'a';

	while (y <= 'z')
	{
		_putchar (y);
		y++;

	}
	_putchar ('\n');

}
