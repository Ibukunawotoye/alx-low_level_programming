#include "main.h"

/*
 * _memset - function that fills memory with a constant byte
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 */
char *_memset(char *s, char b, unsigned int n);
{
	int a = 0;
	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
