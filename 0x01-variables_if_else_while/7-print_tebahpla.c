#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print a-z in reverse
 *
 * Return:  0 (Success)
*/

int main(void)
{
	char t = 'z';

	while (t >= 'a')
	{
		putchar(t);
		t--;
	}
	putchar('\n');

	return (0);
}
