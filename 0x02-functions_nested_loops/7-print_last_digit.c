#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int ib = n % 10;

	if (ib < 10)
		ib *= -1;

	_putchar(ld + '0');

	return (0);
}
