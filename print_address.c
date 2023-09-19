#include "main.h"
/**
 * print_address - write address in hexa format
 * @l: list of arguments
 *
 * @f: pointer to the struct flags
 * Return: counte the number of char printed
 */
int print_address(va_list l, flags_s *f)
{
char *str;
unsigned long int address = va_arg(l, unsigned long int);

int count = 0;

(void)f;
if (!address)
return (_puts("(nil)"));
str = convert(address, 16, 1);
count += _puts("0x");
count += _puts(str);
return (count);
}
