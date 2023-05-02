#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int ib = 0;

	while (*s != '\0')
	{
		ib++;
		s++;
	}

	return (ib);
}
