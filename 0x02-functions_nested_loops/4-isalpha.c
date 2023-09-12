#include "main.h"

/**
 * _isalpha - this is the sub program prototype
 * Description: used to check if an input is an alphabet
 * @c: this is the argument
 *
 * Return: 1 if true otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
