#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int n)
<<<<<<< HEAD
{
int a;
=======
{int a;	
>>>>>>> 287ab4ae9adba06cbacfded90d7ded2b70a79506
if (n < 0)
n = -n;
a = n % 10;
if (a < 0)
a = -a;
_putchar(a + '0');
return (a);
}
