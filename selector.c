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
char c = (char) va_arg(list, int);
putchar(c);
count++;
break;
case 's':
char *str = va_arg(args, char *);
if (str == NULL)
str = "(null)";
while (*str != '\0')
{
putchar(*str);
str++;
count++;
}
break;
default:
putchar('%');
count++;
break;
}
return (count);
}
