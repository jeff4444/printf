#include "main.h"
#include <stdarg.h>

/**
 * _printf - prints a formatted string to the stdout
 *
 * @format: input string
 * @...: other arguments
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	int i, printed = 0, printed_chars = 0; /* printed_chars is the number */
	/* of charsprinted in buffer and the value to be returned */
	int flags, width, precision, size, bufferIndex = 0;
	va_list list;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(list, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[bufferIndex++] = format[i];
			if (bufferIndex == BUFF_SIZE)
				print_buffer(buffer, &bufferIndex);
			printed_chars++;
		}
		else
		{
			print_buffer(buffer, &bufferIndex);
			++i;
			printed = handle_print(format, &i, list, buffer,
				flags, width, precision, size); /* the handle_print fxn will */
				/* also return	the number of chars that replaced the specifier */
			if (printed == -1)
				return (-1);
			printed_chars += printed;
		}
	}

	print_buffer(buffer, &bufferIndex);

	va_end(list);

	return (printed_chars);
}
