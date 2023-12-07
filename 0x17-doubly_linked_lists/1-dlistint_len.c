#include"lists.h"
/**
 * dlistint_len - this is the function to be used
 * @h: this is the argument available
 *
 * Return: number of elements ina linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodee = 0;

	while (h != NULL)
	{
		h = h->next;
		nodee++;
	}
	return (nodee);
}
