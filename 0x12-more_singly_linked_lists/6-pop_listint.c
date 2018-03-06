#include "lists.h"
/**
 * pop_listint - deletes a head node
 * @head: pointer to first node
 * Return: data of new head node
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i = 0;

	if (*head == NULL)
		return (0);

	tmp = *head;
	i = tmp->n;
	tmp = tmp->next;
	if (tmp == NULL)
	{
		free (tmp);
		return (0);
	}
	*head = tmp;

	return (i);
}
