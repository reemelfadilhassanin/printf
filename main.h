#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

int _printf(const char *format, ...);
int _putchar(char character);
int printf_char(va_list list, int count);
int printf_string(va_list list, int count);
int printf_integer(va_list list, int count);
int selector(const char *format, va_list list, int count);
#endif
