#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * selector - handle different specifiers
 * @format: format of the specifiers
 * @list: variable arguments
 * @count: count the printed character
 * Return: count
 */
int selector(const char *format, va_list list, int count)
{
switch (*format)
{
case 'c':
_putchar(va_arg(list, int));
count++;
break;
case 's':
count = printf_string(list, count);
break;
case '%':
_putchar('%');
count++;
break;
case 'b':
count = printf_binary(va_arg(list, unsigned int));
break;
default:
break;
}
return (count);
}
