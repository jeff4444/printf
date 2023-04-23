#include "main.h"
/**
 * @brief printf a floating point number to six decimal places
 * 
 * @param n: float 
 */
void print_float(double n)
{
    int i, j;
    i = (int)n;
    print_nums(i);
    n -= i;
    _putchar('.');

    for (j = 0; j < 6; j++)
    {
        n *= 10;
    }
    print_nums(n);

}

/**
 * @brief prints a float to a specified number of decimal places
 * 
 * @param n: float input
 * @param c: specified number of decimal places
 */
void print_float_spec(double n, char c)
{
    int pow;
    char s[1];
    s[0] = c;
    pow = _atoi(s);

    int i, j;
    i = (int)n;
    print_nums(i);
    n -= i;
    _putchar('.');

    for (j = 0; j < pow; j++)
    {
        n *= 10;
    }
    print_nums(n);
    
}