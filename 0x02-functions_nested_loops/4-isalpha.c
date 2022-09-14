#include "main.h"
/**
 * _isalpha -> a function to check lower case character
 * @c : is parameter
 *
 * Description :print val
 * Return:Return 1 and 0 depending on situation
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
