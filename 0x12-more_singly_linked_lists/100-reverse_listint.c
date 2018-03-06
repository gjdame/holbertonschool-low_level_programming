#include "lists.h"
/**
 *
 *
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current;
	listint_t *next;

	if (*head == NULL)
		return (NULL);

	current = *head;
	next = current->next;
	while (next != NULL)
	{
		current->next = next->next;
		next->next = *head;
		*head = next;
		next = current->next;
	}
	return(*head);
}
