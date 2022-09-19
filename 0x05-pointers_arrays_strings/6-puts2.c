#include "main.h"

/**
 * puts2 - prints a string
 * @str: string to print
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i += 2;
	}

	_putchar('\n');
}
