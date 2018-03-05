#include "lists.h"
/**
 * listint_len - list number of elements
 * @h: pointer to first node on list
 * Return: i number of elements
 */
size_t listint_len(const listint_t *h)
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
