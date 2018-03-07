#include "lists.h"
/**
 * print_listint_safe - prints all elements of listint
 * @h: pointer to first node of list
 * Return: num of elements
 */
size_t print_listint_safe(const listint_t *h)
{
	int i;
	int j;
	const listint_t *tmp;
	const listint_t *current;

	tmp = h;

	i = 0;
	while (tmp != NULL)
	{
		current = h;
		j = 0;
		while (j < i)
		{
			if (current == tmp)
			{
				printf("-> [%p] %d\n", (void *) tmp, tmp->n);
				return (i);
			}
			current = current->next;
			j++;
		}
		printf("[%p] %d\n", (void *) tmp, tmp->n);
		tmp = tmp->next;
		i++;
	}
	return (i);
}
