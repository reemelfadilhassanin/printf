#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - functon name printed
 * @format: format string
 * Return: count of printed character
 */
int _printf(const char *format, ...)
{
int count = 0;
int i;

va_list list;
va_start(list, format);

if (format == NULL)
return (-1);
for (i  = 0 ; format[i] != '\0'; i++)
{
if (format[i]  == '%')
{
format++;
count = selector(format, list, count);
format++;
}
else
{
_putchar(*format);
count++;
}
format++;
}
va_end(list);
return (count);
}
