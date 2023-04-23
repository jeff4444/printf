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
		charact('-');
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
		charact('e');
		charact('+');
		print_nums(fact);
	}
	else if (n == 0)
	{
		charact('0');
	}
	else
	{
		while (n < 1)
		{
			n *= 10;
			fact--;
		}
		print_float(n);
		charact('e');
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
		charact('-');
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
		charact('E');
		charact('+');
		print_nums(fact);
	}
	else if (n == 0)
	{
		charact('0');
	}
	else
	{
		while (n < 1)
		{
			n *= 10;
			fact--;
		}
		print_float(n);
		charact('E');
		print_nums(fact);
	}
}
