#include <stdio.h>

/**
 * main - prints alphabet in lowercase except q and e
 * Return: Always 0
 */
int main(void)
{
	char ib;

	for (ib = 'a'; ib <= 'z'; ib++)
	{
		if (ib != 'q' && ib != 'e')
			putchar(ib);
	}
	putchar('\n');
	return (0);
