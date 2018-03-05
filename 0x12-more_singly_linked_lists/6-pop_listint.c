#include "lists.h"
/**
 * pop_listint - deletes a head node
 * @head: pointer to first node
 * Return: data of new head node
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;

	tmp = *head;
	tmp = tmp->next;

	return (tmp->n);
}
