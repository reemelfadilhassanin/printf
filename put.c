#include "main.h"
#include <unistd.h>
/**
 * _puts - function that writes a string to stdout
 * @str: pointer to the string
 * Return: The number of printed characters (excluding the null terminator)
 */
int _puts(char *str)
{
int i  = 0;

for (i = 0; str[i] != '\0'; i++)
_putchar(str[i]);
return (i);
}
