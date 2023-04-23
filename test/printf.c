#include "main.h"
#include <stdarg.h>

/**
 * _printf - prints a formatted string to the stdout
 *
 * @format: input string
 *
 * Return: the length of s
 */
int _printf(char const *format, ...)
{
	int i;

	va_list args;

	va_start(args, format);

	i = 0;
	i = test_s(format, i, args);

	va_end(args);

	return (i);
}
