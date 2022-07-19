#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns function at the nth node at list
 * @head: singly list
 * @index: index of the nth node
 * Return: address of new element, returns Null if failed
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int i = 0;

	if (node == NULL)
	{
		return (NULL);
	}

	while (i < index && node)
	{
		node = node->next;
		i++;
	}
	return (node);
}
