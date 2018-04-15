#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node a specific spot
 * @h: pointer to first node
 * @idx: place on list to be inserted
 * @n: data inside new node
 * Return: pointer to head
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp;
	dlistint_t *new_node;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	tmp = *h;

	i = 0;
	while (i < idx - 1)
	{
		if (tmp == NULL)
			return (NULL);
		i++;
		tmp = tmp->next;
	}

	if (tmp->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	else
	{
			new_node = malloc(sizeof(dlistint_t));
			if (new_node == NULL)
				return (NULL);
			new_node->n = n;
			new_node->next = tmp->next;
			tmp->next->prev = new_node;
			tmp->next = new_node;
			new_node->prev = tmp;
	}
			return (new_node);

}
