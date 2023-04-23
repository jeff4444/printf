#include "main.h"

/**
 * @brief matches remainders to their equivalent characters
 * 
 * @param n: input
 * @return character equivalent of n
 */
char hex_dec(long long n)
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
 * @brief matches remainders to their equivalent characters in caps
 * 
 * @param n: input
 * @return character equivalent of n
 */
char hex_dec_caps(long long n)
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
 * @brief converts a long to hexadecimal which is 16 char long
 * 
 * @param n: input
 */
void print_hex(long long n)
{
    long long hex;
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
        else
        {
            s[i] = hex_dec(n);
            n = 0;
        }

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
 * @brief converts a long to hexadecimal which is 8 char long
 * 
 * @param n: input
 */
void print_hex_x(long long n)
{
    long long hex;
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
        else
        {
            s[i] = hex_dec(n);
            n = 0;
        }

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
 * @brief converts a long to hexadecimal which is 8 char long in caps
 * 
 * @param n: input
 */
void print_hex_x_caps(long long n)
{
    long long hex;
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
        else
        {
            s[i] = hex_dec_caps(n);
            n = 0;
        }

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
 * @brief converts a long to octate which is 8 char long
 * 
 * @param n: input
 */
void print_oct(long long n)
{
    long long hex;
    char s[8];
    int i;
    char temp;

    for (i = 0; i < 8; i++)
    {
        if (n > 7)
        {
            hex = n / 8;
            n -= hex * 8;
            s[i] = hex_dec(n);
            n = hex;
        }
        else
        {
            s[i] = hex_dec(n);
            n = 0;
        }

    }

    for (i = 0; i < 4; i++)
    {
        temp = s[i];
        s[i] = s[8 - i -1];
        s[8 - i - 1] = temp;
    }

    for (i = 0; i < 8; i++)
    {
        _putchar(s[i]);
    }
}