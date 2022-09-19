#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - reverse string
 * @s: parameters of
 * Return: nothing
 */

void rev_string(char *s)
{
	int length, c;
	char *begin, *end, temp;

	length = _strlen(s);
	begin  = s;
	end    = s;

	for (c = 0; c < length - 1; c++)
		end++;

	for (c = 0; c < length / 2; c++)
	{
		temp   = *end;
		*end   = *begin;
		*begin = temp;
		 begin++;
		 end--;
	}
}
