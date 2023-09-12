#include "main.h"

/**
 * print_alphabet - this is the main function in the program
 * Return: 0 always
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
