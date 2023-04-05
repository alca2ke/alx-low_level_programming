#include"lists.h"

/**
 *free_listint-free
 *@head:headofalist
 *Return:notincluded
 */
voidfree_listint(listint_t *head)
{
	listint_t *temp;

	while((temp = head) != NULL)
	{
		head = head-> next;
		free(temp);
	}
}
