#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int ib;

	ib = n % 10;

	if (ib < 0)
	{
		_putchar(-ib + 48);
		return (-ib);
	}
	else
	{
		_putchar(ib + 48);
		return (ib);
	}
}
