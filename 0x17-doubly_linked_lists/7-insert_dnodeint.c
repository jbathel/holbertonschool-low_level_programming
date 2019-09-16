#include "lists.h"
/**
 * *insert_dnodeint_at_index - Calls Function
 * @h: Pointer to pointer h
 * @idx: integer index
 * @n: integer
 * Description: Function that inserts a new node at a given position
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *node;
	dlistint_t *temp = *h;

	if (idx != 0 && (h == NULL || (*h) == NULL))
		return (NULL);

	node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);

	if (idx == 0 && (h != NULL || (*h) != NULL))
	{
		node->next = (*h);
		(*h) = node;
		(*h)->n = n;
		return (*h);
	}

	for (i = 0; i < idx - 1 && temp != NULL; i++)
		temp = temp->next;
	if (!temp)
	{
		free(node);
		return (NULL);
	}
	node->next = temp->next;
	temp->next = node;
	node->n = n;

	return (node);
}
