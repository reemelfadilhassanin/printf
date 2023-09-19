#include "main.h"

/**
 * _printf - function that name printf
 * @format: the format of string
 * Return: printed string
 */
int _printf(const char *format, ...)
{
int (*pfunc)(va_list, flags_s *);
const char *p;
va_list arguments;
flags_s flags = {0, 0, 0};

int count = 0;

va_start(arguments, format);
if (!format || (format[0] == '%' && !format[1]))
return (-1);
if (format[0] == '%' && format[1] == ' ' && !format[2])
return (-1);
for (p = format; *p; p++)
{
if (*p == '%')
{
p++;
if (*p == '%')
{
count += _putchar('%');
continue;
}
while (get_flag(*p, &flags))
p++;
pfunc = get_print(*p);
count += (pfunc)
? pfunc(arguments, &flags)
: _printf("%%%c", *p);
}
else
count += _putchar(*p);
}
_putchar(-1);
va_end(arguments);
return (count);
}
