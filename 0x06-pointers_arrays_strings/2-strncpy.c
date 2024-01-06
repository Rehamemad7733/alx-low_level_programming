#include "main.h"

/**
* _strncpy -  a function that copy a string.
*
* @dest : pointer to destination
* @src : pointer to source input
* @n: most numbers of bytes from @src
*
* Return: @dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int y;

	for (y = 0; y < n && src[y] != '\0'; y++)
		dest[y] = src[y];
	while (y < n)
	{
		dest[y] = '\0';
		y++;
	}
	return (dest);
}
