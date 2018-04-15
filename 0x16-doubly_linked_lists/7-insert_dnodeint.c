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

	tmp = *h;

	if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = tmp;
		if (tmp->next != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (*h);
	}

	i = 0;
	while (i < (idx - 1))
	{
		if (tmp == NULL)
		{
			free(new_node);
			return (NULL);
		}
		tmp = tmp->next;
		i++;
	}

	new_node->next = tmp->next;
	new_node->prev = tmp;
	tmp->next = new_node;
	if (tmp->next != NULL)
		tmp->next->prev = new_node;

	return (new_node);
}
