#include <stdio.h>

/**
 * main - print lowercase alphabet in reverse
 * Return: Always 0
 */
int main(void)
{
	char ib;

	for (ib = 'z'; ib >= 'a'; ib--)
		putchar(ib);

	putchar("\n");

	return (0);
}
