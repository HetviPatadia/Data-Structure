#include <stdio.h>      
#include <stdlib.h>     // For malloc()

// Structure of a node
struct node
{
    int data;              // Stores the data
    struct node *next;     // Stores address of next node
};

int main()
{
    // Pointer to the first node
    struct node *head = NULL;

    // Pointer used to keep track of the last node
    struct node *temp;

    // Pointer used to create every new node
    struct node *newnode;

    int n, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        // Allocate memory for one node
        newnode = (struct node*)malloc(sizeof(struct node));

        // Enter data  part for the new node
        printf("Enter data: ");
        scanf("%d", &newnode->data);

        // Since this is currently the last node,
        // its next pointer should be NULL
        newnode->next = NULL;

        // If this is the first node
        if(head == NULL)
        {
            // Make head point to the first node
            head = newnode;

            // temp also points to the first node
            temp = newnode;
        }
        else
        {
            // Connect previous last node with new node
            temp->next = newnode;

            // Move temp to the newly created last node
            temp = newnode;
        }
    }

    return 0;
}