#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c
 * @c - the character to print out
 *
 *
 * Return: On success 1
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}_putchar.c
