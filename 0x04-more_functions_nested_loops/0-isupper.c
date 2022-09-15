#include "main.h"
/**
 * _isupper - the functin check where character is upper
 * @c: the input character 
 *
 * Return:On success return 1
 * on error ,-1 is returned
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
	       return (-1);
	}
}	
