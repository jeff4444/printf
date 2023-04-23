#include "main.h"
#include <stdarg.h>
/**
 * test - tests what character
 * @s: checks char
 * @i: number of chars to skip
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
				int x = va_arg(args, int);

				print_nums(x);
			}
			else if (s[i + 1] == 's')
			{
				char const *x = va_arg(args, char*);
				print_string(x);
			}
			else if (s[i + 1] == 'c')
			{
				int x = va_arg(args, int);
				_putchar(x);
			}
			else if (s[i + 1] == 'x')
			{
				long x = va_arg(args, long);
				print_hex_x(x);
			}
			else if (s[i + 1] == 'X')
			{
				long x = va_arg(args, long);
				print_hex_x_caps(x);
			}
			else if (s[i + 1] == 'p')
			{
				long x = va_arg(args, long);
				print_hex(x);
			}
			else if (s[i + 1] == 'o')
			{
				long x = va_arg(args, long);
				print_oct(x);
			}
			else if (s[i + 1] == '%')
			{
				_putchar('%');
			}
			else
			{
				char const *x = "No error";
				print_string(x);
			}
			i += 2;
		}
		else
		{
			_putchar(s[i]);
			i++;
		}
	}
	return (i);
}
