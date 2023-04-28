#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * Return: 1 if true,0 if false
 * on error, -1 return
 */
int_putchar(char c)
{
	return (write(1, &c, 1));
}
