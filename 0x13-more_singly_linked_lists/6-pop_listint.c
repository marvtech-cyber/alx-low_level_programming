#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *pop_listint - deletes the head node of listint_t list
 *@head: list to print
 *Return: n element of the head
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
	{
		return (0);
	}

	tmp = *head;
	n = tmp->n;
	*head = tmp->next;
	free(tmp);

	return (n);
}
