#include "main.h"

/**
 * print_bigS - Write non printable characters
 * @l: list of  arguments
 * @f: pointer to the struct flags that determi
 * Return: count the printed character
 */
int print_bigS(va_list l, flags_s *f)
{
int i, count = 0;
char *res;
char *s = va_arg(l, char *);

(void)f;
if (!s)
return (_puts("(null)"));

for (i = 0; s[i]; i++)
{
if (s[i] > 0 && (s[i] < 32 || s[i] >= 127))
{
_puts("\\x");
count += 2;
res = convert(s[i], 16, 0);
if (!res[1])
count += _putchar('0');
count += _puts(res);
}
else
count += _putchar(s[i]);
}
return (count);
}

/**
 * print_rev - function that writes a string in reverse
 * @l: list of argument string to print
 * Return: count the printed character
 */
int print_rev(va_list l, flags_s *f)
{
char *st;
int x, y = 0;
st = va_arg(l, char *);
if (st == NULL)
st = ")llun(";
for (x = 0; st[x] != '\0'; x++)
;
for (x -= 1 ; x >= 0; x--)
{
_putchar(st[x]);
y++;

}
return (y);
}
/**
 * print_rot13 - prints a string using rot13
 * @l: list of arguments from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: length of the printed string
 */
int print_rot13(va_list l, flags_s *f)
{
	int i, j;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
char *s = va_arg(l, char *);

(void)f;
for (j = 0; s[j]; j++)
{
if (s[j] < 'A' || (s[j] > 'Z' && s[j] < 'a') || s[j] > 'z')
_putchar(s[j]);
else
{
for (i = 0; i <= 52; i++)
{
if (s[j] == rot13[i])
_putchar(ROT13[i]);
}
}
}

return (j);
}

/**
 * print_percent - prints a percent
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flags in which we turn the flags on
 * Return: number of char printed
 */
int print_percent(va_list l, flags_s *f)
{
(void)l;
(void)f;
return (_putchar('%'));
}
