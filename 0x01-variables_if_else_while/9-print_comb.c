#include <stdio.h>

/**
 * main - print combination of numbers
 *
 * description:using the main function print the combination 
 * of numbers in 0 and 9
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar("\n");
	return (0);
}
