#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 * Return: no return
 */
void print_numbers(void)
{
	int ib;

	for (ib = 48; ib < 58; ib++)
	{
		_putchar(ib);
	}
	_putchar('\n');
}
