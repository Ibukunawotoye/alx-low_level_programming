#include <stdio.h>
/**
 * main - prints digits of base 10
 * Return: Always 0
 */
int main(void)
{
	char a;

	for (a = 0; a < 10; a++)
		putchar((a % 10) + '0');

	putchar ("\n");

	return (0);
}
