#include "main.h"
/**
 * print_string - Function that print string format
 * @types: List a of arguments print
 * @buffer: Array of buffer to analyze
 * @flags:  Active flags string
 * @width: get width.
 * @precision: Precision specification
 * @size: Size specifier
 * Return: The number of chars printed in buffre
 */
int print_string(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	int length = 0, s;
	char *ptr = va_arg(types, char *);

	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);
	if (ptr == NULL)
	{
		ptr = "(null)";
		if (precision >= 6)
			ptr = "      ";
	}

	while (ptr[length] != '\0')
		length++;

	if (precision >= 0 && precision < length)
		length = precision;

	if (width > length)
	{
		if (flags & F_MINUS)
		{
			write(1, &ptr[0], length);
			for (s = width - length; s > 0; s--)
				write(1, " ", 1);
			return (width);
		}
		else
		{
			for (s = width - length; s > 0; s--)
				write(1, " ", 1);
			write(1, &ptr[0], length);
			return (width);
		}
	}

	return (write(1, ptr, length));
}
