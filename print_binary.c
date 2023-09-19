#include "main.h"
/**
 * printf_binary - function that print binary number
 * @n: count the number
 * Return: printed characters
 */
int printf_binary(unsigned int n)
{
int count = 0;
int b[32] = {0};
if (n == 0)
{
_putchar('0');
count++;
return (count);
}

if (n > 0) 
{
for (int i = 0; i < 32; i++)
{
	b[i] = n % 2;
	n /= 2;
}
}
int x = 1;
for  (int i = 31; i >= 0; i--)
{
	if (b[i] == 1)
		x = 0;
	if (!x)
	{
		_putchar(b[i] + '0');
		count++;
	}
}
return (count);
}
