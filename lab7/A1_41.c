// 41. Write a program to implement a node structure for singly linked list. Read the 
//     data in a node, print the node.

#include <stdio.h>
#include <stdlib.h>

// Define node structure
struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *newNode;

    // Allocate memory
    newNode = (struct Node*)malloc(sizeof(struct Node));

    // Read data
    printf("Enter data for node: ");
    scanf("%d", &newNode->data);

    newNode->next = NULL;

    // Print node
    printf("\nNode Data: %d\n", newNode->data);
    printf("Next Pointer: %p\n", newNode->next);

    return 0;
}