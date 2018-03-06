#include "lists.h"
/**
 * find_listint_loop - find starting point of a loop
 * @head: pointer to first node
 * Return: NULL or position of loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast;
	listint_t *slow;

	slow = head;
	fast = head;
	while (slow != NULL && fast != NULL)
	{
		fast = (fast->next)->next;
		slow = slow->next;
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
	}
	return (NULL);
}
