#include "main.h"

/**
 * puts2 - this is the funcion name
 * @str: this is the function name
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
