#include <stdio.h>

/**
 * main - prints all number of base 16 in lowercase
 * Return: Always 0
 */
int main(void)
{
	int num;
	char ib;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (ib = 'a'; ib <= 'f'; ib++)
		putchar(ib);

	putchar('\n');

	result (0);
}
