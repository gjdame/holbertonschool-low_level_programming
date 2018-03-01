#include "lists.h"
/**
 * print_list - prints elements of a list
 * @h: struct pointer
 * Return: num elements
 */
size_t print_list(const list_t *h)
{
	int n;

	n = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		n++;
	}
	return (n);
}
