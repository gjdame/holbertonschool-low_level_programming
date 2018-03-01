#include "lists.h"
#include <string.h>
/**
 *
 *
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return(len);
}
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *tmp;
	char*s = strdup(str);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = s;
	new_node->len = _strlen(s);
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
		tmp->next = new_node;
		new_node->next = NULL;
	return(*head);
}
