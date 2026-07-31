// A 46. Write a program to reverse a linked list.

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int info;
    struct Node *link;
};

struct Node *first = NULL;

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

// Reverse linked list
void reverseList() {
    struct Node *pred = NULL;
    struct Node *save = first;
    struct Node *nextNode = NULL;

    while (save != NULL) {
        nextNode = save->link;
        save->link = pred;
        pred = save;
        save = nextNode;
    }

    first = pred;
}

// Display list
void display() {
    struct Node *save = first;

    while (save != NULL) {
        printf("%d -> ", save->info);
        save = save->link;
    }
    printf("NULL\n");
}

int main() {
    int n, value;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter value: ");
        scanf("%d", &value);
        insertEnd(value);
    }

    printf("\nOriginal List: ");
    display();

    reverseList();

    printf("Reversed List: ");
    display();

    return 0;
}