#include "lists.h"
/**
  * free_listint - Function that frees a list
  * @head: pointer to pointer to head of list
  * Return: 0
  */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
