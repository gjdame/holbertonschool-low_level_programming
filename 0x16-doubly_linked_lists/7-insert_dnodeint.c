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

	tmp = *h;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
		return (add_dnodeint(h, n));

	i = 0;
	while (i < (idx - 1))
	{
		tmp = tmp->next;
		if (tmp == NULL)
		{
			free(new_node);
			return (NULL);
		}
		i++;
	}
	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));
	else
	{
			new_node->next = tmp->next;
			new_node->prev = tmp;
			tmp->next = new_node;
			tmp->next->prev = new_node;
			return (new_node);
	}

}
