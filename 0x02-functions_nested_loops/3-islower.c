#include "main.h"

/**
 * _islower - this is the sub program of this function
 * Description: this is fuction that checks is a letter is big or small
 * @c: this is the argument taht will be used
 *
 * Return: 0 if true else 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
