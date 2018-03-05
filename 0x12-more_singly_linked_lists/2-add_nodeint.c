#include "lists.h"
/**
 * add_nodeint - add node to the beginning of list
 * @head: pointer to first node
 * @n: data inside node
 * Return: pointer to first node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = *head;
	*head = tmp;
	return (*head);
}
