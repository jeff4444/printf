#ifndef main_h
#define main_h
#include <stdarg.h>
int _putchar(char c);
void print_hex(long n);
void print_oct(long n);
char hex_dec(long n);
char hex_dec_caps(long n);
void print_hex_x(long n);
void print_nums(int n);
void print_string(const char *s);
void print_float(double n);
void print_float_spec(double n, char spec);
int _printf(char const *format, ...);
int _atoi(char *s);
void print_hex_x_caps(long n);
void scientific_notation(double n);
void scientific_notation_caps(double n);
int test_s(const char *s, int i, va_list args);
#endif
