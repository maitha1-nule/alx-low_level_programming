#include<stdio.h>

/**
 * main - this is the main function
 * Return: 0 always
 */
int main(void)
{
	char a = 'z';

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
