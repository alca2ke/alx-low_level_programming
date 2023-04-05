#include "lists.h"

/**
 * free_listp - free
 * @head: head
 * Return: no return
 */

void free_listp(listp_t **head)
{
	listp_t *prev;
	listp_t *next;

	if (head != NULL)
	{
		next = *head;
		while ((temp = prev) != NULL)
		{
			next = next->next;
			free(prev);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints list
 * @head: head
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	listp_t *hptr, *new, *add;
	hptr = NULL;

	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (count);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		count++;	}

	free_listp(&hptr);
	return (count);
}
