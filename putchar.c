/**
 * _putchar - print one char
 * @character: The char to be  print
 * Return: 1 on success
 */

int _putchar(char character)
{
	return (write(1, &character, 1));
}
