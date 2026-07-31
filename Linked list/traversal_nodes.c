#include<stdio.h>
#include<stdlib.h>

// Structure of node
struct node
{
    int info;              // Data field
    struct node *link;     // Address of next node
};

int main()
{
    struct node *first;    // Head pointer
    struct node *temp;     // Used for traversal

    // Create first node
    first = (struct node*)malloc(sizeof(struct node));
    first->info = 10;

    // Create second node
    first->link = (struct node*)malloc(sizeof(struct node));
    first->link->info = 20;

    // Create third node
    first->link->link = (struct node*)malloc(sizeof(struct node));
    first->link->link->info = 30;

    // Last node ie third node points to NULL
    first->link->link->link = NULL;

    // Start traversal
    temp = first;

    // Visit every node
    while(temp != NULL)
    {
        printf("%d ", temp->info);

        // Move to next node
        temp = temp->link;
    }

    return 0;
}