#include "main.h"

/**
 * print_nums - prints an integer
 *
 * @n: integer input
 */
void print_nums(int n)
{
	int pow, fact, tracker, i;

	if (n < 0)
	{
		charact('-');
		n = -n;
	}

	pow = 10;
	while ((pow * 10) <= n)
		pow *= 10;

	while (n >= 10)
	{
		fact = n / pow;
		n -= (pow * fact);
		charact(fact + '0');
		if (n == 0)
		{
			tracker = 0;
			while (pow != 1)
			{
				pow /= 10;
				tracker++;
			}
			break;
		}
		pow /= 10;
	}
	if (n != 0)
	{
		charact(n + '0');
	}
	else
	{
		for (i = 0; i < tracker; i++)
		{
			charact('0');
		}
	}
}
