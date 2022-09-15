#include "main.h"
/**
 * print_line - print_line with this function
 * @n: the argument of function
 *
 * Return: nothing
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
