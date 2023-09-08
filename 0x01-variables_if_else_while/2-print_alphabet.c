#include<stdio.h>

/**
 *main- this is the only fuction in the program
 *
 * Description: outputs all lettrs from a -z
 * Return: 0 always
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
	putchar(letter);
	++letter;
	}
	putchar('\n');
	return (0);
}
