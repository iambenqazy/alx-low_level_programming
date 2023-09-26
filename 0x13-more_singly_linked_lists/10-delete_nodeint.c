#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at an index
 * @head: pointer to the head of the list
 * @index: index of the node to be added
 *
 * Return: the address of the node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i;
listint_t *current, *prev;

if (head == NULL || *head == NULL)
return (-1);

if (index == 0)
{
current = *head;
*head = current->next;
free(current);
return (1);
}

current = *head;
prev = NULL;

for (i = 0; current != NULL && i < index; i++)
{
prev = current;
current = current->next;
}
if (current == NULL)
return (-1);

prev->next = current->next;
free(current);

return (1);
}

/**
 * listint_len - counts the number of nodes in a linked list
 * @h: head of the list
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t count = 0;

	while (cursor != NULL)
	{
		count += 1;
		cursor = cursor->next;
	}
	return (count);
}
