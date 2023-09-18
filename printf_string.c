#include "main.h"

/**
 * printf_string - print string
 * @list: number of arguments
 * @count: the printed character
 * Return: Count the printed and return integer
 */

int printf_string(va_list list, int count)
{
char *str = va_arg(list, char*);
if (str == NULL)
str = "(null)";
while (*str != '\0')
{
_putchar(*str);
str++;
count++;
}
return (count);
}

