#include "lists.h"
#include <stdio.h>

/**
 * listint_len - function that returns the number
 * of elements in a linked listint_t list
 * @h: list to print number
 * Return: number of elements in list
 */

size_t listint_len(const listint_t *h)
{
	int node = 0;

	while (h != NULL)
	{
		node++;
		h = h->next;
	}
	return (node);

}
