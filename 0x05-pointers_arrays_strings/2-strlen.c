#include "main.h"
/**
 * _strlen - this is the main function in the program
 * @s: this is the argument used
 * Return: returns count
 */
int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
return (count);
}
