#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - function that frees a listint_t list
 * and sets the head to NULL
 * @head: list to free
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL || *head == NULL)
	{
		return;
	}

	while (*head)
	{
		tmp = *head;
		*head = (*(head))->next;
		free(tmp);
	}
	*head = NULL;
}
