#include "main.h"
#include <stdarg.h>

/**
 * @brief prints a formatted string to the stdout
 * 
 * @param s: input string
 * @param ...: other arguments
 */
int _printf(char const *s, ...)
{
    int i;

    va_list args;

    va_start(args, s);

    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == '%')
        {
            if (s[i + 1] == 'd' || s[i + 1] == 'i' || s[i + 1] == 'u')
            {
                int x = va_arg(args, int);
                print_nums(x);
                i += 2;
            }
            else if (s[i + 1] == 'f')
            {
                double x = va_arg(args, double);
                print_float(x);
                i += 2;
            }
            else if (s[i + 1] == 'e')
            {
                double x = va_arg(args, double);
                scientific_notation(x);
                i += 2;
            }
            else if (s[i + 1] == 'E')
            {
                double x = va_arg(args, double);
                scientific_notation_caps(x);
                i += 2;
            }
            else if (s[i + 1] == '.')
            {
                if (s[i + 3] == 'f')
                {
                    double x = va_arg(args, double);
                    print_float_spec(x, s[i + 2]);
                }
                i += 4;

            }
            else if (s[i + 1] == 's')
            {
                char const *x = va_arg(args, char*);
                print_string(x);
                i += 2;
            }
            else if (s[i + 1] == 'c')
            {
                int x = va_arg(args, int);
                _putchar(x);
                i += 2;
            }
            else if (s[i + 1] == 'x')
            {
                long x = va_arg(args, long);
                print_hex_x(x);
                i += 2;
            }
            else if (s[i + 1] == 'X')
            {
                long x = va_arg(args, long);
                print_hex_x_caps(x);
                i += 2;
            }
            else if (s[i + 1] == 'p')
            {
                long x = va_arg(args, long);
                print_hex(x);
                i += 2;
            }
            else if (s[i + 1] == 'o')
            {
                long x = va_arg(args, long);
                print_oct(x);
                i += 2;
            }
            else if (s[i + 1] == '%')
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
            _putchar(s[i]);
            i++;
        }
    }

    va_end(args);

    return (i);
}


