#include "main.h"

/**
 * print_alphabet_x10 - print ten times the alphabet in lowercase
 */

void print_alphabet_x10(void)
{
	int ten;
	char ib;
	 for (ten = '0'; ten <= '9'; ten++)
	 {
		 for (ib = 'a'; ib <= 'z'; ib++)
			 _putchar(ib);
		 _putchar('\n');
	 }
}
