#include "main.h"
#include <unistd.h>
#define BUFFER_SIZE 1024
/**
 * _putchar - function that writes a character to stdout
 * @c: The character to print
 * Return: Always 1 on success
 */
int _putchar(char c)
{
static char buf[BUFFER_SIZE];
static int i;

if (i >= BUFFER_SIZE || c == -1)
{
if (write(1, buf, i) == -1)
return (-1);
i = 0;
}
if (c != -1)
{
buf[i] = c;
i++;
}
return (1);
}
