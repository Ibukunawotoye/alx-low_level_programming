#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int ib;
	int ik;

	ib = 0;
	while (dest[ib] != '\0')
	{
		ib++;
	}
	ik = 0;
	while (ik < n && src[ik] != '\0')
	{
	dest[ib] = src[ik];
	ib++;
	ik++;
	}
	dest[ib] = '\0';
	return (dest);
}
