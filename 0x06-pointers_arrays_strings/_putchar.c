#include <unistde.h>

/**
 * _putchar - writes the character c to stdout
 * @C: char to be printed
 * Return: 1 on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}