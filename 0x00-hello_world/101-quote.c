#include <unistd.h>

/**
 * main - this is the only function in the program
 * Return: 1 for this program
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
