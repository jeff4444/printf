#include "main.h"
#include <stdarg.h>

/**
 * _printf - prints a formatted string to the stdout
 *
 * @s: input string
 */
int _printf(char const *s, ...)
{
	int i;

	va_list args;

	va_start(args, s);

	i = 0;
	i = test_s(s, i, args);

	va_end(args);

	return (i);
}
