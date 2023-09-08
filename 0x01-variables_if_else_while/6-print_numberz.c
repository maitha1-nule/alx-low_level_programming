#include<stdio.h>

/**
 * main - this is the main function of the program
 * Return: 0 always
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}
