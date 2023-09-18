#include "main.h"
/**
 * printf_string - function to print string
 * @list: string to be printed
 * @count: count the character printed
 *Return: count  of characters printed
 */
int printf_string(va_list list, int count)
{
	char *str = va_arg(list, char*);

if (str == NULL)
str = "(null)";

while (*str != '\0')
{
_putchar(*str);
count++;
str++;
}
return (count);
}

