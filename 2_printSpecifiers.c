#include "main.h"
/**
 * print_unsigned_int - prints an unsigned integer
 * @args: list of cmd arguments
 * @buffer: buffer
 * @flags: number of flags
 * @width: width
 * @precision: precision
 * @size: size
 *
 * Return: number of printed characters
 */
int print_unsigned_int(va_list args, char buffer[], int flags,
		int width, int precision, int size)
{
	int i;
	unsigned long int val = va_arg(args, unsigned long int);

	i = BUFF_SIZE - 2;
	val = convert_size_unsgnd(val, size);

	if (val == 0)
	{
		buffer[i] = '0';
		i--;
	}

	buffer[BUFF_SIZE - 1] = '\0';
	while (val > 0)
	{
		buffer[i] = (val % 10) + '0';
		i--;
		val /= 10;
	}
	i++;
	return (write_unsgnd(0, i, buffer, flags, width, precision,
				size));
}

/**
 * print_octate - prints an unsigned octal
 * @args: array of cmd line arguments
 * @buffer: buffer
 * @flags: flags
 * @width: width
 * @precision: precision
 * @size: size
 *
 * Return: number of printed characters
 */
int print_octate(va_list args, char buffer[], int flags,
		int width, int precision, int size)
{
	int i;
	unsigned long int val = va_arg(args, unsigned long int);
	unsigned long int num = val;

	i = BUFF_SIZE - 2;

	UNUSED(width);

	val = convert_size_unsgnd(val, size);
	if (val == 0)
	{
		buffer[i] = '0';
		i--;
	}
	buffer[BUFF_SIZE - 1] = '\0';
	while (val > 0)
	{
		buffer[i] = (val % 8) + '0';
		i--;
		val /= 8;
	}
	if (flags & F_HASH && num != 0)
	{
		buffer[i] = '0';
		i--;
	}
	i++;
	return (write_unsgnd(0, i, buffer, flags, width, precision,
				size));
}

/**
 * print_hexa - prints an unsigned number in lower case
 * hexadecimal
 * @args: array of cmd line arguments
 * @buffer: buffer
 * @flags: flags
 * @width: width
 * @precision: precision
 * @size: size
 *
 * Return: number of printed characters
 */
int print_hexa(va_list args, char buffer[], int flags,
		int width, int precision, int size)
{
	return (print_hexa_all(args, "0123456789abcdef", buffer,
				flags, 'x', width, precision, size));
}

/**
 * print_hexa_caps - prints an unsigned number in uppercase
 * hexadecimal
 * @args: array of cmd line arguments
 * @buffer: buffer
 * @flags: flags
 * @width: width
 * @precision: precision
 * @size: size
 *
 * Return: number of printed characters
 */
int print_hexa_caps(va_list args, char buffer[], int flags,
	int width, int precision, int size)
{
	return (print_hexa_all(args, "0123456789ABCDEF", buffer,
			flags, 'X', width, precision, size));
}

/**
 * print_hexa_all - prints an unsigned number in either
 * uppercase or lowercase
 * @args: array of cmd line arguments
 * @str: string to map remainders
 * @buffer: buffer
 * @flags: flags
 * @c: flag character
 * @width: width
 * @precision: precision
 * @size: size
 *
 * Return: number of printed characters
 */
int print_hexa_all(va_list args, char str[], char buffer[],
		int flags, char c, int width, int precision, int size)
{
	int i;
	unsigned long int val = va_arg(args, unsigned long int);
	unsigned long int num = val;

	i = BUFF_SIZE - 2;

	UNUSED(width);

	val = convert_size_unsgnd(val, size);
	if (val == 0)
	{
		buffer[i] = '0';
		i--;
	}
	buffer[BUFF_SIZE - 1] = '\0';
	while (val > 0)
	{
		buffer[i] = str[val % 16];
		i--;
		val /= 16;
	}
	if (flags & F_HASH && num != 0)
	{
		buffer[i] = c;
		i--;
		buffer[i] = '0';
		i--;
	}
	i++;
	return (write_unsgnd(0, i, buffer, flags, width, precision,
				size));
}
