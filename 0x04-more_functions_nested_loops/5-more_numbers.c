#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: no return
 */
void more_numbers(void)
{
	int ik, ib;

	for (ik = 0; ik <= 10; ik++)
	{
		for (ib = 0; ib <= 14; ib++)
	{
		if (ib >= 10)
			_putchar('1');
		_putchar(ib % 10 + '0');
	}
	_putchar('\n');
	}
}
