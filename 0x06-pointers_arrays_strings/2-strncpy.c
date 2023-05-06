#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int ib;

	ib = 0;
	while (ib < n && src[ib] != '\0')
	{
		dest[ib] = src[ib];
		ib++;
	}
	while (ib < n)
	{
		dest[ib] = '\0';
		ib++;
	}

	return (dest);
}

