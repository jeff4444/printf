#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/* SIZES */
#define S_LONG 2
#define S_SHORT 1

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
int _printf(const char *format, ...);
int handle_print(const char *fmt, int *i,
	va_list list, char buffer[], int flags, int width, int precision, int size);

int _putchar(va_list types, char buffer[],
	int flags, int width, int precision, int size);
void print_hex(long n);
int print_percent(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_oct(va_list types, char buffer[],
	int flags, int width, int precision, int size);
char hex_dec(long n);
char hex_dec_caps(long n);
void print_hex_x(long n);
int print_int(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_string(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_binary(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int _atoi(char *s);
void print_hex_x_caps(long n);
int print_unsigned_int(va_list args, char buffer[], int flags,
		int width, int precision, int size);
int print_octate(va_list args, char buffer[], int flags,
		int width, int precision, int size);
int print_hexa(va_list args, char buffer[], int flags, int width,
		int precision, int size);
int print_hexa_caps(va_list args, char buffer[], int flags,
		int width, int precision, int size);
int print_hexa_all(va_list args, char str[], char buffer[],
	int flags, char c, int width, int precision, int size);
/* Functions to handle other specifiers */
int get_flag(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int get_precision(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);

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
	char buffer[], int flags, int width, int precision, int size);

/* Some useful other functions to be used */
int is_printable(char c);
int is_digit(char c);
long int convert_size_number(long int num, int size);
long int convert_size_unsgnd(unsigned long int num, int size);

#endif

