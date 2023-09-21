#include "main.h"

/**
 * _strcmp - this is the main function in the program
 * @s1: parameter1
 * @s2: parameter2
 *
 * Return: s1,s2
 */
int _strcmp(char *s1, char *s2)
{
	int k;

	k = 0;

	while (s1[k] != '\0' && s2[k] != '\0')
	{
		if (s1[k] != s2[k])
		{
			return (s1[k] - s2[k]);
}
k++;
}
return (0);
}
