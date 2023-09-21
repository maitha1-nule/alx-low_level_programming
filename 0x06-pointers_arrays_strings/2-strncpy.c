#include "main.h"

/**
* _strncpy - the main function of the code
*
* @src: parameter
* @dest: parameter
* @n:  paramter
*
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int k;

	k = 0;

	while (k < n && src[k] != '\0')
	{
		dest[k] = src[k];
		k++;
	}
	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}
	return (dest);
}
