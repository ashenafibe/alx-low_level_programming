#include "main.h"
/**
 * print_sign - a function chech the sign of num
 * @n : is the int that will use for the argument of the function
 *
 * Description:yui
 * Return : 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}