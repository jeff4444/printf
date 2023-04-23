#include "main.h"
/**
 * @brief prints out a string
 * 
 * @param s: string to be printed
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