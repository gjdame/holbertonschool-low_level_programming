#include "lists.h"
/**
 * print_listint - prints all elements of listint
 * @h: pointer to first node of list
 * Return: num of elements
 */
size_t print_listint(const listint_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
