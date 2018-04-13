#include "lists.h"
/**
 * dlistint_len - list number of elements
 * @h: pointer to first node on list
 * Return: i number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
