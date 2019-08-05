#include "lists.h"

/**
  * *add_nodeint_end - Function that adds a new node at the end of a list
  * @head: pointer to a pointer to head of list
  * @n: integer
  * Return: address of the new element, or NULL if it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *last = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (last->next != NULL)
		last = last->next;
	new_node->n = n;
	last->next = new_node;
	return (new_node);
}
