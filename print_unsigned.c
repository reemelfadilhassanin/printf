#include "main.h"
/**
 * print_unsigned - Function prints an unsigned number format
 * @types: List a of arguments to print
 * @buffer: Buffer array to handle analyze
 * @flags:  Calculates active flags change format
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed in buffer
 */
int print_unsigned(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	int x = BUFF_SIZE - 2;
	unsigned long int n = va_arg(types, unsigned long int);

	n = convert_size_unsgnd(n, size);

	if (n == 0)
		buffer[x--] = '0';

	buffer[BUFF_SIZE - 1] = '\0';

	while (n > 0)
	{
		buffer[x--] = (n % 10) + '0';
		n /= 10;
	}

	x++;

	return (write_unsgnd(0, x, buffer, flags, width, precision, size));
}
