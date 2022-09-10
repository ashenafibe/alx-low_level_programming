#include <stdio.h>
/**
 * main- print if it full fill condition
 *
 * Description:the main function print combination
 * of the given numbers
 * Return :0
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
