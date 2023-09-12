#include "main.h"

/**
 * print_last_digit - this is the function prototype
 * Description: prints tha last digit of a number
 * @c: this is the argument thst will be used
 *
 * Return: last_digit
 */
int print_last_digit(int c)
{
	int last_digit;

	last_digit = c % 10;
	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
