#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: Always 0
 */
int main(void)
{
	int la, dp;

	for (la = '0'; la < '9'; la++)
	{
	for (dp = la + '1'; dp <= '9'; dp++)
	{
	if (dp != la)
	{
	putchar(la);
	putchar(dp);
	if (la == '8' && dp == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');

	return (0);
}
