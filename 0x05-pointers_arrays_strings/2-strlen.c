#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s:the given string
 * Return: The length of string
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}
