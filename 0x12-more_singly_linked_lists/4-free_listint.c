#include "lists.h"
/**
 * free_listint - free a list
 * @head: pointer to first node
 *
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
