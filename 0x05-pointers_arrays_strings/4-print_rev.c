#include "main.h"
#include "2-strlen.c"

/**
 * print_rev - Prints a string in reverse order
 * @s: String to reverse
 * Return: Nothing
 */

void print_rev(char *s)
{
	int len = _strlen(s);

	while (len--)
	{
		_putchar(*(s + len));
	}
	_putchar('\n');
}
