#include "main.h"

/**
 *  _abs - this is the main  prototype of this function
 *  Description: computes the absolute value of an integer
 *  @c: this is the nmber computed
 *
 *  Return: absolute value
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
			return (abs_val);
	}
	else
		return (c);
}
