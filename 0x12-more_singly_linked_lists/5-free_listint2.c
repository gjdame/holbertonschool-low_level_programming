#include "lists.h"
/**
 * free_listint2 - free a list
 * @head: pointer to first node
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *tmp2;

	tmp = *head;
	while (tmp != NULL)
	{
		tmp2 = tmp->next;
		free(tmp);
		tmp = tmp2;
	}
	*head = tmp;
	*head = NULL;
}
