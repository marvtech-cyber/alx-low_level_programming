#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * insert_dnodeint_at_index - function that inserts a new node at
 * a given position
 * @h: doubly list
 * @idx: index of the list where the new node should be added
 * @n: new int to add to h
 * Return: the address of the new node, or NULL if it failed.
 * if it is not possible to add the new node at index idx,
 * do not add the new node and return NULL.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *tmpcount = *h, *tmp1 = *h, *tmp2;
	unsigned int count = 0;

	if (!h)
		return (NULL);
	while (tmpcount)
		tmpcount = tmpcount->next, count++;
	if (idx > count)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->prev = NULL, new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	for (count = 0; count < idx; count++)
		tmp2 = tmp1, tmp1 = tmp1->next;

	new_node->next = tmp1;
	new_node->prev = tmp2;
	tmp2->next = new_node;
	if (tmp1)
		tmp1->prev = new_node;

	return (new_node);
}
