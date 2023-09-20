#include "main.h"

/**
 * convert - converts number to string
 * @num: the numeber argument
 * @base: input argument
 * @lowercase: convert hexa number to lowercase
 * Return: pointer of string that converted
 */
char *convert(unsigned long int num, int base, int lowercase)
{
static char *rep;
static char buffer[50];
char *ptr;

rep = (lowercase) ? "0123456789abcdef" : "0123456789ABCDEF";
ptr = &buffer[sizeof(buffer) - 1];
*ptr = '\0';
do {
*--ptr = rep[num % base];
num /= base;
} while (num != 0);

return (ptr);
}
