#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *so;
	int w, x = 0;

	if (str == NULL)
		return (NULL);
	w = 0;
	while (str[w] != '\0')
		w++;
	so = malloc(sizeof(char) * (w + 1));

	if (so == NULL)
		return (NULL);

	for (x = 0; str[x]; x++)
		so[x] = str[x];

	return (so);
}
