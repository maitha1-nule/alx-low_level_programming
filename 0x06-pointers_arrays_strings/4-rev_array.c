#include "main.h"

/**
 * reverse_array - this is the main function in the program
 * @a: parameter1
 * @n: parameter2
 *
 * Return: always 0
 */
void reverse_array(int *a, int n)
{
	int k, r;

	for (k = 0; k < n--; k++)
	{
		r = a[k];
		a[k] = a[n];
		a[n] = r;
	}
}
