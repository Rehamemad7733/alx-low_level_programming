#include "main.h"

/**
* _strncat -  a function that concatenates two strings.
*
* @dest : pointer to destination
* @src : pointer to source input
* @n: most numbers of bytes from @src
*
* Return: @dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;
	while (dest[x])
		x++;
	for (y = 0; y < n && src[y] != '\0'; y++)
		dest[x + y] = src[y];
	dest[x + y] = '\0';
	return (dest);
}
