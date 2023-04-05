#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - checks the desc
 * @head:pointer
 * @str:string
 * Description: adds a new node
 * Return:the address of the new element, if it fails return NULL
 */

list_t *add_node(list_t **head, const char *str);
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
