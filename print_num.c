#include "main.h"

/**
 * @brief prints an integer
 * 
 * @param n: integer input
 */
void print_nums(int n)
{
    if (n < 0)
    {
        _putchar('-');
        n = -n;
    }
    int pow, fact, tracker, i;
    pow = 10;
    while ((pow * 10) <= n)
        pow *= 10;
    
    while (n >= 10)
    {
        fact = n / pow;
        n -= (pow * fact);
        _putchar(fact + '0');
        if (n == 0)
        {
            tracker = 0;
            while (pow != 1)
            {
                pow /= 10;
                tracker++;
            }
            break;
        }
        pow /= 10;
    }
    if (n != 0)
    {
        _putchar(n + '0');
    }
    else
    {
        for (i = 0; i < tracker; i++)
        {
            _putchar('0');
        }
    }
}