#include "main.h"
/**
 * print_percent - Function that prints a percent format
 * @types: Lista of arguments to print
 * @buffer: Buffer array to analyze
 * @flags:  Active flags that change format
 * @width: get width.
 * @precision: Precision specification
 * @size: Size specifier
 * Return: The number of chars printed in buffre
 */
int print_percent(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	UNUSED(types);
	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);
	return (write(1, "%%", 1));
}
