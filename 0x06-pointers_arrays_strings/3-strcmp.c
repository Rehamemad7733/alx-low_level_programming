#include "main.h"

/**
* _strcmp -  a function that compare 2 strings
*
* @s1 : string 1
* @s2 : string 2
*
* Return: 0 of false
*/

int _strcmp(char *s1, char *s2)
{
	int x = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			x = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (x);
}
