#include "main.h"
/**
 * print_string - function that writes a string
 * @l: list of arguments
 * @f: pointer to the struct flags
 * Return: the printed character count
 */
int print_string(va_list l, flags_s *f)
{
char *s = va_arg(l, char *);
(void)f;
if (!s)
s = "(null)";
return (_puts(s));
}

/**
 * print_char - function that writes a character
 * @l: list of arguments
 * @f: pointer to the struct flags
 * Return: the printed format
 */
int print_char(va_list l, flags_s *f)
{
(void)f;
_putchar(va_arg(l, int));
return (1);
}
