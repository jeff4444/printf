#include "main.h"
#include <stdio.h>
#include <limits.h>
int main()
{
	unsigned int ui;
	
	ui = (unsigned int)INT_MAX + 1024;

	_printf("Unsigned: [%u] ", ui);
	_printf("Octal: [%o] ", ui);
	_printf("Hex: [%x %X] ", ui, ui);
	return (0);
}
