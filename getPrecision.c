#include "main.h"

/**
 * get_precision - Calculates the precision for printing
 * @format: Formatted string in which to print the arguments
 * @i: List of arguments to be printed.
 * @list: list of arguments.
 *
 * Return: Precision.
 */
int get_precision(const char *format, int *i, va_list list)
{
	int currIndex = *i + 1;
	int precision = -1;

	if (format[currIndex] != '.')
		return (precision);

	precision = 0;

	for (currIndex += 1; format[currIndex] != '\0'; currIndex++)
	{
		if (is_digit(format[currIndex]))
		{
			precision *= 10;
			precision += format[currIndex] - '0';
		}
		else if (format[currIndex] == '*')
		{
			currIndex++;
			precision = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*i = currIndex - 1;

	return (precision);
}
