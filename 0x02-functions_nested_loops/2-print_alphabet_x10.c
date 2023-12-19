#include "main.h"

/**
 * main: print_alphabet_x10-  print 10 times the alphabet
 * Return: void
 */
void print_alphabet_x10(void)
{
	char t;
	char y;

	for (y = 0; y < 10; y++)
	{
		t = 'a';
		while (t <= 'z')
		{
			_putchar(t);
			t++;
		}

		_putchar('\n');
	}
}
