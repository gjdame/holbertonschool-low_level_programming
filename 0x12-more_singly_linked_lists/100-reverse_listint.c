#include "lists.h"
/**
 * reverse_listint - reverse a list
 * @head: pointer to a pointer of first node
 * Return: pointer to first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *holder;
	listint_t *next_node;

	if (*head == NULL)
		return (NULL);

	holder = NULL;
	next_node = NULL;
	while (*head != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = holder;
		holder = *head;
		*head = next_node;
	}
	*head = holder;
	return (*head);
}
