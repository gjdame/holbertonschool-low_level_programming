#include "lists.h"
#include <string.h>
/**
 * _strlen - string length function
 * @s: string
 * Return: int length of string
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
/**
 * add_node - adds node to beginning of linked list
 * @head: double pointer to struct
 * @str: string
 * Return: pointer to head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;
	char *s = strdup(str);

	if (s == NULL)
	{
		free(head);
		return (NULL);
	}
	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);
	tmp->str = s;
	tmp->len = _strlen(s);
	tmp->next = *head;
	*head = tmp;
	return (*head);
}
