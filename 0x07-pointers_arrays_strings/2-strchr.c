#include "main.h"
/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int w = 0;

	for (; s[w] >= '\0'; w++)
	{
		if (s[w] == c)
			return (&s[w]);
	}
	return (0);
}
