#include "main.h"

/**
 * _print_rev_recursion - Print String Reversed order
 * @s: String to printed
 *
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

