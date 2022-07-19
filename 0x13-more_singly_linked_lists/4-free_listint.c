#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - function to free a listint_t list
 * @head: list to free
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *tmp = NULL;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
