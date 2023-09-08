#include<stdio.h>

/**
 * main - this is main funtion in the program
 * Return: 0 always
 */
int main(void)
{
	char a;

	for (a = '0'; a <= 'f'; a++)
	{
		if ((a >= '0' && a <= '9') || (a >= 'a' && a <= 'f'))
		{
			putchar(a);
		}
	}
	putchar('\n');
	return (0);
}
