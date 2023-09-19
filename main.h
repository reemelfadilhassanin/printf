#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
typedef struct flags
{
int plus;
int space;
int hash;
} flags_s;

char c;
int (*f)(va_list ap, flags_s *f);
} ph;
int print_int(va_list l, flags_s *f);
void print_number(int n);
int print_unsigned(va_list l, flags_s *f);
int count_digit(int i);
int print_hex(va_list l, flags_s *f);
int print_hex_big(va_list l, flags_s *f);
int print_binary(va_list l, flags_s *f);
int print_octal(va_list l, flags_s *f);
char *convert(unsigned long int num, int base, int lowercase);
int _printf(const char *format, ...);
int (*get_print(char s))(va_list, flags_s *);
int get_flag(char s, flags_s *f);
int print_string(va_list l, flags_s *f);
int print_char(va_list l, flags_s *f);
int _putchar(char c);
int _puts(char *str);
int print_rot13(va_list l, flags_s *f);
int print_rev(va_list l, flags_s *f);
int print_bigS(va_list l, flags_s *f);
int print_address(va_list l, flags_s *f);
int print_percent(va_list l, flags_s *f);

#endif
