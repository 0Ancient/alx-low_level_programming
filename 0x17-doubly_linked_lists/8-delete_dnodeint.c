#include "lists.h"
#include <stdlib.h>

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index) {
    if (head == NULL || *head == NULL) {
        return -1; // List is empty or invalid
    }

    dlistint_t *current = *head;
    
    if (index == 0) {
        *head = current->next;
        if (*head != NULL) {
            (*head)->prev = NULL;
        }
        free(current);
        return 1;
    }

    for (unsigned int i = 0; i < index; i++) {
        if (current == NULL) {
            return -1; // Index out of bounds
        }
        current = current->next;
    }

    if (current == NULL) {
        return -1; // Index out of bounds
    }

    if (current->prev != NULL) {
        current->prev->next = current->next;
    }
    if (current->next != NULL) {
        current->next->prev = current->prev;
    }
    free(current);
    return 1;
}
