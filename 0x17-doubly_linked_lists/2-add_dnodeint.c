#include"lists.h"
/**
 * add_dnodeint - this is the function name
 * @head: this is the first argument
 * @n: this is the second argument
 *
 * Return: address of the new element els null
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if(temp == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
