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

va_list list;
va_start(list, format);
int count = 0;
int i;

if (format == NULL)
return (-1);
for (i  = 0; *format != '\0'; i++)
{
if (*format == '%')
{
format++;
count = selector(format, list, count);
format++;

}
else
{
_putchar(format[i]);
count++;
format++;
}
}
va_end(list);
return (count);
}
