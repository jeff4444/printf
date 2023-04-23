#include "main.h"
/**
 * scientific_notation - prints a double in scientific notation
 *
 * @n: double
 */
void scientific_notation(double n)
{
	int fact = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n > 1)
	{
		while (n >= 10)
		{
			n /= 10;
			fact++;
		}
		print_float(n);
		_putchar('e');
		_putchar('+');
		print_nums(fact);
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		while (n < 1)
		{
			n *= 10;
			fact--;
		}
		print_float(n);
		_putchar('e');
		print_nums(fact);
	}
}


/**
 * scientific_notation_caps -  prints a double in scientific notation in caps
 *
 * @n: double
 */
void scientific_notation_caps(double n)
{
	int fact = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n > 1)
	{
		while (n >= 10)
		{
			n /= 10;
			fact++;
		}
		print_float(n);
		_putchar('E');
		_putchar('+');
		print_nums(fact);
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		while (n < 1)
		{
			n *= 10;
			fact--;
		}
		print_float(n);
		_putchar('E');
		print_nums(fact);
	}
}
