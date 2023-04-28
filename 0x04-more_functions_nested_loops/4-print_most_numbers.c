#include "main.h"

/**
 * print_most_numbers -  prints the numbers, from 0 to 9
 * Return: no return
 */
void print_most_numbers(void)
{
	char ib;

	for (ib = '0'; ib <= '9'; ib++)
	{
		if (!(ib == '2' || ib == '4'))
			_putchar(ib);
	}
	_putchar('\n');
}
