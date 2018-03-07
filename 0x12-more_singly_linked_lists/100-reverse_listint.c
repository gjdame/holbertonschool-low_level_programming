#include "lists.h"
/**
 * reverse_listint - reverse a list
 * @head: pointer to a pointer of first node
 * Return: pointer to first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current;
	listint_t *next_node;

	if (*head == NULL)
		return (NULL);

	current = NULL;
	next_node = NULL;
	while (*head != NULL)
	{
		current = (*head)->next;
		(*head)->next = next_node;
		next_node = *head;
		*head = current;
	}
	*head = next_node;
	return (*head);
}
