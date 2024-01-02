#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Pointer to the string to be reversed
 */
void rev_string(char *s)
{
	int i = 0;
	int j;
	char c;

	/* Find the length of the string */
	while (s[i] != '\0')
	{
		i++;
	}
	i--;

	/* Swap characters from both ends of the string */
	for (j = 0; j < i; j++)
	{
		c = s[j];
		s[j] = s[i];
		s[i] = c;
		i--;
	}
}
