#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of three digits.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x1 = 0;  /* Initialize the first digit */

	while (x1 <= 7)  /* Iterate over the first digit from 0 to 7 */
	{
		int x2 = x1 + 1;  /* Initialize the second digit */

		while (x2 <= 8)  /* Iterate over the second digit from x1 + 1 to 8 */
		{
			int x3 = x2 + 1;  /* Initialize the third digit */

			while (x3 <= 9)  /* Iterate over the third digit from x2 + 1 to 9 */
			{
				putchar(x1 + '0');  /* Print the first digit */
				putchar(x2 + '0');  /* Print the second digit */
				putchar(x3 + '0');  /* Print the third digit */

				if (x1 != 7 || x2 != 8 || x3 != 9)
				{
					putchar(',');  /* Print comma if not the last combination */
					putchar(' ');  /* Print space if not the last combination */
				}

				x3++;  /* Increment the third digit */
			}

			x2++;  /* Increment the second digit */
		}

		x1++;  /* Increment the first digit */
	}

	putchar('\n');  /* Print a new line */

	return (0);
}
