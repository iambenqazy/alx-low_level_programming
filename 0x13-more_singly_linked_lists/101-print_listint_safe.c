#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a linked list safely
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *slow, *fast;
size_t node_count = 0;

slow = fast = head;

while (slow != NULL && fast != NULL)
{
printf("[%p] %d\n", (void *)slow, slow->n);
node_count++;

slow = slow->next;
fast = (fast->next != NULL) ? fast->next->next : NULL;

if (fast != NULL && fast == slow)
{
fprintf(stderr, "Infinite loop detected\n");
exit(98);
}
}
return (node_count);
}
