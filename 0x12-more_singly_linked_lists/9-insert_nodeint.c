#include "lists.h"
/**
 * insert_nodeint_at_index - insert node a specific spot
 * @head: pointer to first node
 * @idx: place on list to be inserted
 * @n: data inside new node
 * Return: pointer to head
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp;
	listint_t *new_node;
	unsigned int i;

	tmp = *head;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = tmp;
		*head = new_node;
		return (*head);
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
	tmp->next = new_node;

	return (new_node);
}
