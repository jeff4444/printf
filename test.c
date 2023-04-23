#include "main.h"
#include <stdarg.h>
/**
 * test_s - tests what character
 * @s: checks char
 * @i: number of chars to skip
 * @args: args list
 * Return: number of chars skipped
 */
int test_s(const char *s, int i, va_list args)
{
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			if (s[i + 1] == 'd' || s[i + 1] == 'i' || s[i + 1] == 'u')
			{
				print_nums(va_arg(args, int));
			}
			else if (s[i + 1] == 's')
			{
				print_string(va_arg(args, const char*));
			}
			else if (s[i + 1] == 'c')
			{
				_putchar(va_arg(args, int));
			}
			else if (s[i + 1] == 'x')
			{
				print_hex_x(va_arg(args, long));
			}
			else if (s[i + 1] == 'o')
			{
				print_oct(va_arg(args, long));
			}
			else if (s[i + 1] == '%')
			{
				_putchar('%');
			}
			i += 2;
		}
		else
		{
			charact(s[i]);
			i++;
		}
	}
	return (i);
}
