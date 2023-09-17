#include <stdio.h>
#include <stdarg.h>
int _printf(const char *format, ...)
{
    va_list args;
    int printed_chars = 0;
    char c;
    va_start(args, format);
    while ((c = *format++))
    {
        if (c != '%')
        {
            putchar(c);
            printed_chars++;
        }
        else if (*format)
        {
            if (*format == 'c')
            {
                putchar(va_arg(args, int));
                printed_chars++;
            }
            else if (*format == 's')
            {
                char *str = va_arg(args, char *);
                if (str)
                {
                    while (*str)
                    {
                        putchar(*str++);
                        printed_chars++;
                    }
                }
            }
            else if (*format == '%')
            {
                putchar('%');
                printed_chars++;
            }
            else
            {
                putchar('%');
                putchar(*format);
                printed_chars += 2;
            }
            format++;
        }
    }
    va_end(args);
    return printed_chars;
}
