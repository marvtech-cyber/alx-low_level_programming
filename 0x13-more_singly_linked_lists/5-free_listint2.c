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
	listint_t *tmp, *tmp2;

	if (head != NULL)
	{
		tmp = *head;
		while (tmp != *head)
		{
			tmp2 = tmp;
			tmp = tmp->next;
			free(tmp2);
		}
		*head = NULL;
	}
}
