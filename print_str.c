#include "main.h"

/**
 * print_string - prints out a string
 *
 * @s: string to be printed
 */
void print_string(const char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		_putchar(s[j]);
		j++;
	}
}
