#include "lists.h"
/**
 * free_dlistint - free a list
 * @head: pointer to first node
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
