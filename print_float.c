#include "main.h"
/**
 * print_float - printf a floating point number to six decimal places
 *
 * @n: float
 */
void print_float(double n)
{
	int i, j;

	i = (int)n;
	print_nums(i);
	n -= i;
	_putchar('.');

	for (j = 0; j < 6; j++)
	{
		n *= 10;
	}
	print_nums(n);

}

/**
 * print_float_spec - prints a float to a specified number of decimal places
 *
 * @n: float input
 * @c: specified number of decimal places
 */
void print_float_spec(double n, char c)
{
	int pow, i, j;
	char s[1];

	s[0] = c;
	pow = _atoi(s);

	i = (int)n;
	print_nums(i);
	n -= i;
	_putchar('.');

	for (j = 0; j < pow; j++)
	{
		n *= 10;
	}
	print_nums(n);

}
