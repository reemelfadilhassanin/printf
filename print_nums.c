#include "main.h"

/**
 * print_int - prints an integer
 * @l: va_list of arguments from _printf
 * @f: pointer to the struct flags determining
 * Return: number of char printed
 */
int print_int(va_list l, flags_s *f)
{
int n = va_arg(l, int);
int res = count_digit(n);

if (f->space == 1 && f->plus == 0 && n >= 0)
res += _putchar(' ');
if (f->plus == 1 && n >= 0)
res += _putchar('+');
if (n <= 0)
res++;
print_number(n);
return (res);
}

/**
 * print_unsigned - function that prints an unsigned integer
 * @l: va_list of arguments from _printf
 * @f: pointer to the struct flags determining
 * Return: number of char printed
 */
int print_unsigned(va_list l, flags_s *f)
{
unsigned int u = va_arg(l, unsigned int);
char *str = convert(u, 10, 0);

(void)f;
return (_puts(str));
}

/**
 * print_number - function to print integer to standeroutput
 * @n: the integer to be printed
 */
void print_number(int n)
{
unsigned int n1;

if (n < 0)
{
_putchar('-');
n1 = -n;
}
else
n1 = n;

char buffer[12];
int i = 0;
if (n1 == 0)
buffer[i++] = '0';
else
{

while (n1 > 0)
{
buffer[i++] = (n1 / 10) + '0';
print_number(n1 / 10);
}
}
int j;
for(j = i - 1; j >=0; j--)
{

_putchar(buffer[j]);
}
}
/**
 * count_digit - return the integer digts
 * @i: integer number
 * Return: digits of number
 */
int count_digit(int i)
{
unsigned int d = 0;
unsigned int u;

if (i < 0)
u = -i;
else
u = i;
while (u != 0)
{
u /= 10;
d++;
}
return (d);
}
