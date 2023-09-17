#include <stdio.h>
#include <stdarg.h>
/**
 * _printf - Printf function 
 * @format: format string
 * Return: count 
 */
int my_printf(const char *format, ...)
{
va_list list;
va_start(list, format);
int count = 0;

if (format == NULL)
	return (-1);
for (int i  = 0; format[i] != '\0'; i++)
{
	if (format[i] == '%')
	{
		i++;
	switch (format[i])
	{
		case 'c':
			{
				int c = va_arg(list, int);
				putchar(c);
				count++;
				break;
			}
		case 's':
			{
				char *str = va_arg(list, char *);
				if (str == NULL)
					str = "(null)";
				while (*str != '\0')
				{
					putchar(*str);
					str++;
					count++;
					break;
				}}
			Case '%':
				putchar('%');
			break;
		default:
			putchar(format[i]);
			break;


	}
	}
	else 
	{
		putchar(format[i]);
count++;
	}
	va_end(list);
	return count;
}
