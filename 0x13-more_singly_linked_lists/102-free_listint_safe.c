#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - frees a linked list safely
 * @h: double pointer to the head of the list
 *
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
    listint_t *slow, *fast, *temp;
    size_t node_count = 0;

    slow = fast = *h;

    while (slow != NULL && fast != NULL)
    {
        slow = slow->next;
        fast = (fast->next != NULL) ? fast->next->next : NULL;

        /* Check if there's a loop (fast pointer catches up to slow pointer) */
        if (fast != NULL && fast == slow)
        {
            fprintf(stderr, "Infinite loop detected\n");
            exit(98);
        }

        /* Free the nodes as you go */
        if (slow != NULL)
        {
            temp = slow;
            slow = slow->next;
            free(temp);
            node_count++;
        }
    }

    /* Set the head pointer to NULL */
    *h = NULL;

    return node_count;
}

