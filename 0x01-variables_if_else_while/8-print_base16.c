#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print numbers of base16 in lowercase
 *
 * Return:  0 (Success)
*/

int main(void)
{
	int t = 48; /*48; decimal rep of 0*/

	while (t <= 102) /*102; decimal rep of f*/
	{
		putchar(t);

		/* after 9 we jump till 96; `*/
		if (t == 57)
			t += 39;
		t++;
	}
	putchar('\n');

	return (0);
}
