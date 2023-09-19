#include "main.h"
/**
 * _puts - this is the main funtion here
 * @str : this is the argument
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	_putchar(str[i]);
	_putchar('\n');
}
