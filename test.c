#include "main.h"
/**
 * main - Prints Jeff.
 * Return: 0
 */

int main(void)
{
	char *name = "Jeff";
	char a = 'c';

	_printf("My name is %s.  ", name);
	_printf("%c  ", a);
	_printf("%%", a);
	return (0);
}

