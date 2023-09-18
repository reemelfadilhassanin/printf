#include "main.h"
/**
 * printf_char - prints character
 * @list: the arguments
 * @count: count the printed characters
 * Return: count
 */
int printf_char(va_list list, int count)
{
	char s = va_arg(list, int);

	_putchar(s);
	return (s + 1);
}

