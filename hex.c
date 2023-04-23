#include "main.h"

/**
 * hex_dec - matches remainders to their equivalent characters
 *
 * @n: input
 * Return: character equivalent of n
 */
char hex_dec(long n)
{
	switch (n)
	{
		case 0:
			return '0';
			break;
		case 1:
        		return '1';
		        break;
		case 2:
		        return '2';
		        break;
 		case 3:
		        return '3';
		        break;
		case 4:
		        return '4';
		        break;
		case 5:
		        return '5';
		        break;
		case 6:
		        return '6';
		        break;
		case 7:
		        return '7';
		        break;
		case 8:
		        return '8';
		        break;
		case 9:
		        return '9';
		        break;
		case 10:
		        return 'a';
		        break;
		case 11:
		        return 'b';
		        break;
		case 12:
		        return 'c';
		        break;
		case 13:
		        return 'd';
		        break;
		case 14:
		        return 'e';
		        break;
		case 15:
		        return 'f';
		        break;
		default:
		        return 'n';
		        break;
	}
}

/**
 * hex_dec_caps - matches remainders to their equivalent characters in caps
 * 
 * @n: input
 * Return: character equivalent of n
 */
char hex_dec_caps(long n)
{
	switch (n)
	{
		case 0:
		        return '0';
		        break;
		case 1:
		        return '1';
		        break;
		case 2:
		        return '2';
		        break;
		case 3:
		        return '3';
		        break;
		case 4:
		        return '4';
		        break;
		case 5:
		        return '5';
		        break;
		case 6:
		        return '6';
		        break;
		case 7:
		        return '7';
		        break;
		case 8:
		        return '8';
		        break;
		case 9:
		        return '9';
		        break;
		case 10:
		        return 'A';
		        break;
		case 11:
		        return 'B';
		        break;
		case 12:
		        return 'C';
		        break;
		case 13:
		        return 'D';
		        break;
		case 14:
		        return 'E';
		        break;
		case 15:
		        return 'F';
		        break;
		default:
		        return '0';
		        break;
	}
}

/**
 * print_hex - converts a long to hexadecimal which is 16 char long
 *
 * @n: input
 */
void print_hex(long n)
{
	long hex;
	char s[16];
	int i;
	char temp;

	for (i = 0; i < 16; i++)
	{
        	if (n > 15)
        	{
			hex = n / 16;
        		n -= hex * 16;
            		s[i] = hex_dec(n);
            		n = hex;
		}
	}
        else
        {
		s[i] = hex_dec(n);
            	n = 0;
        }

    	for (i = 0; i < 8; i++)
    	{
        	temp = s[i];
        	s[i] = s[16 - i -1];
        	s[16 - i - 1] = temp;
    	}

    	for (i = 0; i < 16; i++)
    	{
        	_putchar(s[i]);
    	}
}

/**
 * print_hex_x - converts a long to hexadecimal which is 8 char long
 * 
 * @n: input
 */
void print_hex_x(long n)
{
    	long hex;
    	char s[16];
    	int i;
    	char temp;

    	for (i = 0; i < 16; i++)
    	{
        	if (n > 15)
        	{
            		hex = n / 16;
            		n -= hex * 16;
            		s[i] = hex_dec(n);
            		n = hex;
		}
        }
        else
        {
            	s[i] = hex_dec(n);
            	n = 0;
        }

    	for (i = 0; i < 8; i++)
    	{
        	temp = s[i];
        	s[i] = s[16 - i -1];
        	s[16 - i - 1] = temp;
	}

    	for (i = 0; i < 16; i++)
    	{
        	if (i > 7)
        	{
            		_putchar(s[i]);
        	}
	}
}

/**
 * print_hex_x_caps - converts a long to hexadecimal which is 8 char long in caps
 *
 * @n: input
 */
void print_hex_x_caps(long n)
{
    	long hex;
    	char s[16];
    	int i;
    	char temp;

    	for (i = 0; i < 16; i++)
    	{
        	if (n > 15)
        	{
            		hex = n / 16;
            		n -= hex * 16;
            		s[i] = hex_dec_caps(n);
            		n = hex;
		}
        }
        else
        {
            	s[i] = hex_dec_caps(n);
            	n = 0;
        }

    	for (i = 0; i < 8; i++)
    	{
        	temp = s[i];
        	s[i] = s[16 - i -1];
        	s[16 - i - 1] = temp;
	}

    	for (i = 0; i < 16; i++)
    	{
        	if (i > 7)
        	{
            		_putchar(s[i]);
        	}
	}
}

/************* PRINT UNSIGNED NUMBER IN OCTAL  ****************/
/**
 * print_oct - Prints an unsigned number in octal notation
 * @types: Lista of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed
 */
void print_oct(va_list types, char buffer[], int flags, int width, int precision, int size)
{

	int i = BUFF_SIZE - 2;
	unsigned long int num = va_arg(types, unsigned long int);
	unsigned long int init_num = num;

	UNUSED(width);

	num = convert_size_unsgnd(num, size);

	if (num == 0)
		buffer[i--] = '0';

	buffer[BUFF_SIZE - 1] = '\0';

	while (num > 0)
	{
		buffer[i--] = (num % 8) + '0';
		num /= 8;
	}

	if (flags & F_HASH && init_num != 0)
		buffer[i--] = '0';

	i++;

	return (write_unsgnd(0, i, buffer, flags, width, precision, size));
}
