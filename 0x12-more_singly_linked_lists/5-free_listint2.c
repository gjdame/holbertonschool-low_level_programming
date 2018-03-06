#include "lists.h"
/**
 * free_listint2 - free a list
 * @head: pointer to first node
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (*head == NULL)
		return;

	tmp = *head;
	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}
