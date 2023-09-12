#include "main.h"

/**
 * print_alphabet_x10 - this is the sub fuction in this program
 * Return: 0 always
 */
void print_alphabet_x10(void)
{
	int a = 0;
	char b;

	while (a <= 9)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
	_putchar('\n');
	a++;
	}
}
