//42. Write a menu driven program to implement following operations on the singly linked list.  
// 1 Insert a node at the front of the linked list. 
// 2 Display all nodes. 
// 3 Delete a first node of the linked list. 
// 4 Insert a node at the end of the linked list. 
// 5 Delete a last node of the linked list. 
// 6 Delete a node from specified position. 
// 7 Count the no. of nodes in the linked list.

#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int info;
    struct Node *link;
};

struct Node *first = NULL;

// Insert at front
void insertFront(int value) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->info = value;
    newNode->link = first;
    first = newNode;
}

// Insert at end
void insertEnd(int value) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node *save = first;

    newNode->info = value;
    newNode->link = NULL;

    if (first == NULL) {
        first = newNode;
        return;
    }

    while (save->link != NULL) {
        save = save->link;
    }

    save->link = newNode;
}

// Delete first node
void deleteFront() {
    if (first == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node *save = first;
    first = first->link;
    free(save);
}

// Delete last node
void deleteEnd() {
    if (first == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node *save = first;
    struct Node *pred = NULL;

    if (first->link == NULL) {
        free(first);
        first = NULL;
        return;
    }

    while (save->link != NULL) {
        pred = save;
        save = save->link;
    }

    pred->link = NULL;
    free(save);
}

// Delete from position
void deletePosition(int pos) {
    if (first == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node *save = first;

    if (pos == 1) {
        first = save->link;
        free(save);
        return;
    }

    struct Node *pred = NULL;
    for (int i = 1; i < pos && save != NULL; i++) {
        pred = save;
        save = save->link;
    }

    if (save == NULL) {
        printf("Invalid position\n");
        return;
    }

    pred->link = save->link;
    free(save);
}

// Display list
void display() {
    struct Node *save = first;

    if (save == NULL) {
        printf("List is empty\n");
        return;
    }

    printf("Linked List: ");
    while (save != NULL) {
        printf("%d -> ", save->info);
        save = save->link;
    }
    printf("NULL\n");
}

// Count nodes
void countNodes() {
    int count = 0;
    struct Node *save = first;

    while (save != NULL) {
        count++;
        save = save->link;
    }

    printf("Total nodes: %d\n", count);
}

int main() {
    int choice, value, pos;

    while (1) {
        printf("\n--- MENU ---\n");
        printf("1. Insert at Front\n");
        printf("2. Insert at End\n");
        printf("3. Delete First Node\n");
        printf("4. Delete Last Node\n");
        printf("5. Delete from Position\n");
        printf("6. Display List\n");
        printf("7. Count Nodes\n");
        printf("8. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                insertFront(value);
                break;

            case 2:
                printf("Enter value: ");
                scanf("%d", &value);
                insertEnd(value);
                break;

            case 3:
                deleteFront();
                break;

            case 4:
                deleteEnd();
                break;

            case 5:
                printf("Enter position: ");
                scanf("%d", &pos);
                deletePosition(pos);
                break;

            case 6:
                display();
                break;

            case 7:
                countNodes();
                break;

            case 8:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}