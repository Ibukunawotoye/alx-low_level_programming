#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int w;
	int x;

	for (w = 0; w < 8; w++)
	{
		for (x = 0; x < 8; x++)
			_putchar(a[w][x]);
		_putchar('\n');
	}
}
