// 45. Write a program to copy a linked list. 

#include <stdio.h>
#include<stdlib.h>

struct Node {
    int info;
    struct Node *link;
};

struct Node *first = NULL;
struct Node *copy = NULL;

// Insert at end (for original list)
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

// Copy linked list
void copyList() {
    struct Node *save = first;

    if (save == NULL) {
        printf("Original list is empty\n");
        return;
    }

    // Create first node of copy
    copy = (struct Node*)malloc(sizeof(struct Node));
    copy->info = save->info;
    copy->link = NULL;

    struct Node *copySave = copy;
    save = save->link;

    while (save != NULL) {
        struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->info = save->info;
        newNode->link = NULL;

        copySave->link = newNode;
        copySave = newNode;
        save = save->link;
    }
}

// Display list
void display(struct Node *start) {
    struct Node *save = start;

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
    display(first);

    copyList();

    printf("Copied List: ");
    display(copy);

    return 0;
}