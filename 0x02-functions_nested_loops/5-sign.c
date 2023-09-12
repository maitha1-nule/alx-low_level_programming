#include "main.h"

/**
 * print_sign - this is function prototype
 * Description: checks whether a no is positive or negative
 * @n: this is the argument used
 *
 * Return: 1 and print + if true else 0 - and -1 if less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else
		if (n <  0)
		{
			_putchar(45);
		return (-1);
		}
		else
			{
				_putchar(48);
				return (0);
			}
}
