#include "lists.h"
/**
 * delete_nodeint_at_index - delete node a specific spot
 * @head: pointer to first node on list
 * @index: position to delete
 * Return: 1 if successful, -1 if failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *tmp2;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	tmp = *head;

	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	i = 0;
	while (i < (index - 1))
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
		i++;
	}
	tmp2 = (tmp->next)->next;
	free(tmp->next);
	tmp->next = tmp2;

	return (1);
}
