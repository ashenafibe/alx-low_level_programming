#include "main.h"
/**
 * print_sign -
 * @n : is the int that will use for the argument of the function
 *
 * Return : 1 if the num s positive, -1 if the num is negative, 0 if the num is 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('-');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else 
	{
		_putchar('_');
		return (-1);
	}
}
