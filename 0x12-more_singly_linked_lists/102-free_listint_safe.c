#include "lists.h"
/**
 * print_listint_safe - prints all elements of listint
 * @h: pointer to first node of list
 * Return: num of elements
 */
size_t free_listint_safe(listint_t **h)
{
	int i;
	int j;
	listint_t *tmp;
	listint_t *holder;
	listint_t *current;

	if (h == NULL)
		return (0);

	tmp = *h;

	i = 0;
	while (tmp != NULL)
	{
		current = *h;
		j = 0;
		while (j < i)
		{
			if (current == tmp)
			{
				*h = NULL;
				return (i);
			}
			current = current->next;
			j++;
		}
		holder = tmp->next;
		free(tmp);
		tmp = holder;
		i++;
	}
	*h = NULL;
	return (i);
}
