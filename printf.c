#include "main.h"

/**
 * _printf - function that name printf
 * @format: the format of string
 * Return: printed string
 */
int _printf(const char *format, ...)
{
if (!format || (format[0] == '%' && !format[1]))
return (-1);
va_list arguments;
va_start(arguments, formats);
int count = 0;

while (*format)
{
if (*format == '%')
{
format++;
if (*format == '%')
{
count += _putchar('%');
}
else
{
int printed = handle_format(&format, arguments);
if (printed == -1)
{
va_end(arguments);
return (-1);
}
count += printed;
}
}
else
{
count += +putchar(*format);
}
format++;
}

va_end(arguments);
return (count);
}
