#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print if number is positiive, zero or negative
 *
 * description:using the main function print the number
 * is positive, zero or negative
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
		putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
