#include<stdio.h>

/**
 * main - this is the only function in the progam
 * Return: 0 always
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; ++a)
	{
		if (a != 'e' && a != 'q')
		{
			putchar(a);
		}
	}
	putchar('\n');
	return (0);
}
