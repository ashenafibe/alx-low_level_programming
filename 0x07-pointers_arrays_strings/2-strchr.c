#include "main.h"

/**
 *  _strchr - Locates a character in a string.
 *  @s: The string to be searched
 *  @c: The character to be located
 *  Return: If c is found - a pointer to the first occurence.
 */
char *_strchr(char *s, char c)
{
	for (int i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
