#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node_end - check desc
 * Description: adds a new node
 * @head:pointer
 * @str:string
 * Return: the address of the new element, or NULL for failure
 */

list_t *add_node_end(list_t **head, const char *str);
{
	list_t *new_node;
	list_t *last;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;
	prev = *head;
	if (prev == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (prev->next != NULL)
		{
			prev = prev->next;
		}
		prev->next = new_node;
	}
	return (*head);
}

