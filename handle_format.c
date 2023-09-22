#include "main.h"

/**
 * handle_format - function that handle specifier
 * @format: string pointer
 * @arguments: list of arguments
 * Return: int number of printed character
 */
int handle_format(const char **format, va_list arguments)
{
flags_s flags = {0, 0, 0};
int count = 0;

while (get_flag(**format, &flags))
{
(*format)++;
}

int (*pfunc)(va_list, flags_s *) = get_print(**format);

if (!pfunc)
{
count += _printf("%%%c", **format);
}
else
{
count += pfunc(arguments, &flags);
}
return (count);
}
