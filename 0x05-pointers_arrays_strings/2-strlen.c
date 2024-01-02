#include "main.h"
/**
 * _strlen - returns the lenghth
 * @s: string parameter
 * Return: lenghth string
 */
int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
	++counter;

	return (counter);
}
