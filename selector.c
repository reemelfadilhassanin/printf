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
int  c ;
char *str;
switch (*format)
{
case 'c':
c = va_arg(list, int);
_putchar(c);
count++;
break;
case 's':
*str = va_arg(list, char *);
if (str == NULL)
str = "(null)";
while (*str != '\0')
{
_putchar(*str);
str++;
count++;
}
break;
default:
_putchar('%');
count++;
break;
}
return (count);
}
