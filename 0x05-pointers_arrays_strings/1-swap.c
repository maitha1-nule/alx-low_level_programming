#include "main.h"
/**
 *swap_int - this is the function name
 *@a: this the first argument
 *@b: second argument
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
