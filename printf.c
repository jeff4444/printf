#include "main.h"
#include <stdarg.h>

/**
 * _printf - prints a formatted string to the stdout
 *
 * @format: string input
 */
int _printf(char const *format, ...)
{
	int i;

	va_list args;

	va_start(args, format);

	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'd' || format[i + 1] == 'i' ||
					format[i + 1] == 'u')
			{
				int x = va_arg(args, int);

				print_int(x);
				i += 2;
			}
			else if (format[i + 1] == 'f')
			{
				double x = va_arg(args, double);

				print_float(x);
				i += 2;
			}
			else if (format[i + 1] == '.')
			{
				if (format[i + 3] == 'f')
				{
					double x = va_arg(args, double);

					print_float_spec(x, s[i + 2]);
				}
				i += 4;
			}
			else if (format[i + 1] == 's')
			{
				char const *x = va_arg(args, char*);

				print_string(x);
				i += 2;
			}
			else if (format[i + 1] == 'c')
			{
				int x = va_arg(args, int);

				_putchar(x);
				i += 2;
			}
			else if (format[i + 1] == 'x')
			{
				long x = va_arg(args, long);

				print_hex_x(x);
				i += 2;
			}
			else if (format[i + 1] == 'X')
			{
				long x = va_arg(args, long);

				print_hex_x_caps(x);
				i += 2;
			}
			else if (format[i + 1] == 'p')
			{
				long x = va_arg(args, long);

				print_hex(x);
				i += 2;
			}
			else if (format[i + 1] == 'o')
			{
				long x = va_arg(args, long);

				print_oct(x);
				i += 2;
			}
			else if (format[i + 1] == '%')
			{
				_putchar('%');
				i += 2;
			}
			else
			{
				char const *x = "No error";

				print_string(x);
				i += 2;
			}
		}
		else
		{
			_putchar(format[i]);
			i++;
		}
	}

	va_end(args);

	return (i);
}


