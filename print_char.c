#include "main.h"
/**
 * print_char - Function that print character format
 * @types: List a of arguments
 * @buffer: array buffer
 * @flags:  set char flags
 * @width: Width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: The number of charates printed in buffer
 */
int print_char(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	char c = va_arg(types, int);

	return (handle_write_char(c, buffer, flags, width, precision, size));
}
