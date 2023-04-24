#include <stdio.h>

/**
 * main - prints alphabet in lowercase and uppercase
 * Return: Always 0
 */
int main(void)
{
	char ib;

	for (ib = 'a'; ib <= 'z'; ib++)
		putchar(ib);

	for (ib = 'A'; ib <= 'Z'; ib++)
		putchar(ib);

	putchar('\n');

	return (0);
}
