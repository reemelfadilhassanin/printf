#include "main.h"
/**
 * print_hexa - Convert and print int as heax
 * @types: Lista of integer to printed
 * @map_to: Array of values to map the number to
 * @buffer: Buffer array to analyze
 * @flags:  Flags that modify format
 * @flag_ch: Character to be prefix
 * @width: get width
 * @precision: Precision specification
 * @size: Size specification
 * Return: Number of chars printed to map_to
 */
int print_hexa(va_list types, char map_to[], char buffer[],
	int flags, char flag_ch, int width, int precision, int size)
{
	int i = BUFF_SIZE - 2;
	unsigned long int num = va_arg(types, unsigned long int);
	unsigned long int init_num = num;

	UNUSED(width);

	num = convert_size_unsgnd(num, size);

	if (num == 0)
		buffer[i--] = '0';

	buffer[BUFF_SIZE - 1] = '\0';

	while (num > 0)
	{
		buffer[i--] = map_to[num % 16];
		num /= 16;
	}

	if (flags & F_HASH && init_num != 0)
	{
		buffer[i--] = flag_ch;
		buffer[i--] = '0';
	}

	i++;

	return (write_unsgnd(0, i, buffer, flags, width, precision, size));
}
