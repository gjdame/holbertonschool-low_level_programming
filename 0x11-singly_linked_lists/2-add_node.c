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
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;
	char*s = strdup(str);
	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);
	tmp->str = s;
	tmp->len = _strlen(s);
	tmp->next = *head;
	*head = tmp;
	return(*head);
}
