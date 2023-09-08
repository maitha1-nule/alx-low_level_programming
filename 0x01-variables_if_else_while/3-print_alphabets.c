#include<stdio.h>

/**
 * main - this is the only function in the program
 * Return: 0 always
 */
int main(void)
{
	char a, b;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	for (b = 'A' ; b <= 'Z'; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
