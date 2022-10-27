#include "main.h"

/**
 * _isalpha - checks for char alphabet
 * @c: the character to be checked
 *
 * Return: returns 0 or 1 depending on condition
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c <= 'A' && c <= 'Z'));
}
