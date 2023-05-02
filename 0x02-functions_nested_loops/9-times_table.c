#include "main.h"

/**
 * times_table - prints 9 times table
 */
void times_table(void)
{
	int ib, ik, ip;

	for (ib = 0; ib <= 9; ib++)
	{
		_putchar('0');

	i	for (ik = 1; ik <= 9; ik++)
		{
			_putchar(',');
			_putchar(' ');

			ip = ib * ik;

			if (ip <= 9)
			   _putchar(' ');
			else
				_putchar((ip / 10) + '0');
			_putchar((ip % 10) + '0');
		}
		_putchar('\n');
	}
}
