#include "main.h"
/**
 * main - prints _putchar, followd by a new line
 * Return: Alwys 0 (Success)
 */
int main(void)
{
	char y[] = "_putchar";

	int x;

	for (x = 0; x < 8; x++)
	{
		_putchar(y[x]);
	}
	_putchar('\n');
	return (0);
}
