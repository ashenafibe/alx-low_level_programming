#include "main.h"
/**
 * print_diagonal - print diagonal
 * @n: the argument of function
 *
 * Return: nothing
 */
void print_diagonal(int n)
{
	int len,space;

	if (n > 0)
	{
		for (len = 0; len < n; n++)
		{
			for (space = 0; space < len; space++)
			{
			_putchar(' ');
			}
			_putchar('\\');
			if (len == (n-1))
			{
			continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\');
}
				