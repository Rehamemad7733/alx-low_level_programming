#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print 0, 1, - 9
 *
 * Return:  0 (Success)
*/

int main(void)
{
	int t = 0;

	while (t <= 9)
	{
		putchar(t + 48);

		if (t != 9)
		{
			putchar(',');
			putchar(' ');
		}

		t++;
	}
	putchar('\n');

	return (0);
}
