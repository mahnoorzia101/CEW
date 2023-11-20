#include <stdio.h>
#include <stdlib.h>

// Define a structure for a singly linked list node
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a new node at the end of a linked list
void insertEnd(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to remove elements with odd indices from a linked list
void removeOddIndices(struct Node** head) {
    if (*head == NULL || (*head)->next == NULL) {
        // Empty list or list with only one element, nothing to remove
        return;
    }

    struct Node* current = *head;
    struct Node* nextNode;

    while (current != NULL && current->next != NULL) {
        nextNode = current->next;

        // Skip the next node (odd index)
        current->next = nextNode->next;

        // Free the memory of the removed node
        free(nextNode);

        // Move to the next pair of nodes
        current = current->next;
    }
}

// Function to print a linked list
void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    // Create a linked list
    struct Node* head = NULL;
    insertEnd(&head, 1);
    insertEnd(&head, 2);
    insertEnd(&head, 3);
    insertEnd(&head, 4);
    insertEnd(&head, 5);

    // Print the original linked list
    printf("Original Linked List: ");
    printList(head);

    // Remove elements with odd indices
    removeOddIndices(&head);

    // Print the modified linked list
    printf("Linked List after Removing Odd Indices: ");
    printList(head);

    // Free the memory allocated for the linked list
    struct Node* current = head;
    while (current != NULL) {
        struct Node* nextNode = current->next;
        free(current);
        current = nextNode;
    }

    return 0;
}
