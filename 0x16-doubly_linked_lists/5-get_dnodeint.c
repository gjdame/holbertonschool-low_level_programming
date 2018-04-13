#include "lists.h"
/**
 * get_dnodeint_at_index - get node at a specific index
 * @head: pointer to first node
 * @index: node to find
 * Return: pointer to first node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	if (index == 0)
		return (head);

	while (i < index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}
