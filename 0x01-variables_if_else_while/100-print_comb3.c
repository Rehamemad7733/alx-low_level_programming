#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible different
 *           combinations of two digits.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int t = 0, r;

	while (t <= 9)
	{
		r = 0;
		while (r <= 9)
		{
			if (t != r && t < r)
			{
				putchar(t + 48);
				putchar(r + 48);

				if (t + r != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			r++;
		}
		t++;
	}
	putchar('\n');

	return (0);
}
