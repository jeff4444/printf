#ifndef main_h
#define main_h

#include <stdard.h>
#include <stdio.h>
#include <unistd.h>

#define BUFF_SIZE 1024

/**
 * struct fmt - Struct op
 *
 * @fmt: The format.
 * @fn: The function associated.
 */
typedef struct fmt
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);
} fmt_t;

int handle_print(const char *fmt, int *i,
va_list list, char buffer[], int flags, int width, int precision, int size);
int _putchar(char c);
void print_hex(long n);
void print_oct(va_list types, char buffer[], int flags, int width, int precision, int size);
char hex_dec(long n);
char hex_dec_caps(long n);
void print_hex_x(long n);
void print_int(va_list types, char buffer[], int flags, int width, int precision, int size);
void print_string(const char *s);
void print_float(double n);
void print_float_spec(double n, char spec);
int _printf(char const *s, ...);
int _atoi(char *s);
void print_hex_x_caps(long n);

/* Funciotns to handle other specifiers */
int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int get_precision(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);

/*Function to print string in reverse*/
int print_reverse(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/*Function to print a string in rot 13*/
int print_rot13string(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/* width handler */
int handle_write_char(char c, char buffer[],
	int flags, int width, int precision, int size);
int write_number(int is_positive, int ind, char buffer[],
	int flags, int width, int precision, int size);
int write_num(int ind, char bff[], int flags, int width, int precision,
	int length, char padd, char extra_c);
int write_pointer(char buffer[], int ind, int length,
	int width, int flags, char padd, char extra_c, int padd_start);

int write_unsgnd(int is_negative, int ind,
char buffer[],
	int flags, int width, int precision, int size);

#endif
