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

	current = *head;
	next_node = current->next;
	while (next_node != NULL)
	{
		current->next = current->next->next;
		next_node->next = *head;
		*head = next_node;
		next_node = current->next;
	}
	return (*head);
}
