#include "main.h"
/**
 * print_oct - converts a long to octate which is 8 char long
 *
 * @n: input
 */
void print_oct(long n)
{
	long hex;
	char s[8];
	int i;
	char temp;

	for (i = 0; i < 8; i++)
	{
		if (n > 7)
		{
			hex = n / 8;
			n -= hex * 8;
			s[i] = hex_dec(n);
			n = hex;
		}
		else
		{
			s[i] = hex_dec(n);
			n = 0;
		}

	}

	for (i = 0; i < 4; i++)
	{
		temp = s[i];
		s[i] = s[8 - i -1];
		s[8 - i - 1] = temp;
	}

	for (i = 0; i < 8; i++)
	{
		_putchar(s[i]);
	}
}
