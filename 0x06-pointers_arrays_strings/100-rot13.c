#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s: pointer to string params
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int ib;
	int ik;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (ib = 0; s[ib] != '\0'; ib++)
	{
		for (ik = 0; ik < 52; ik++)
		{
			if (s[ib] == data1[ik])
			{
				s[ib] = datarot[ik];
				break;
			}
		}
	}
	return (s);
}
