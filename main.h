#ifndef main_h
#define main_h
#include <stdlib.h>
// printf
int _putchar(char c);
void print_hex(long long n);
void print_oct(long long n);
char hex_dec(long long n);
char hex_dec_caps(long long n);
void print_hex_x(long long n);
void print_nums(int n);
void print_string(const char *s);
void print_float(double n);
void print_float_spec(double n, char spec);
int _printf(char const *s, ...);
int _atoi(char *s);
void print_hex_x_caps(long long n);
void scientific_notation(double n);
void scientific_notation_caps(double n);

//forget this
char _getchar(void);

//new

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
    const char *op;
    int (*f)(int a, int b);
} op_t;
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(const char *s))(int, int);
#endif