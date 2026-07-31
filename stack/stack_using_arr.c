#include <stdio.h>      // For printf() and scanf()

#define MAX 5           // Maximum size of stack

int stack[MAX]; // Array to store stack elements


// 'top' stores the index of the topmost element
// Initially, stack is empty
int top = -1;


//fucntion to check if list is full or not
int isFull(){
    if(top = MAX-1){
        return 1;
    }
    else{
        return 0;
    }
}


// Function to push an element into the stack
void push()
{
    int value;

    // Check if stack is full
    if(isFull())
    {
        printf("Stack Overflow!\n");
        return;
    }

    printf("Enter value to push: ");
    scanf("%d", &value);

    top++; // Move top to the next position
    
    stack[top] = value; // Store value at top position

    printf("%d pushed successfully.\n", value);
}


//fucntion to check if list is empty or not
int isEmpty(){
    if(top == -1){
        return 1;
    }
    else{
        return 0;
    }
}


// Function to remove top element
void pop()
{
    // Check if stack is empty
    if(isEmpty())
    {
        printf("Stack Underflow!\n");
        return;
    }

    // Display removed element
    printf("%d popped successfully.\n", stack[top]);

    // Move top one position down
    top--;
}


// Function to display top element
void peek()
{
    // Check if stack is empty
    if(top == -1)
    {
        printf("Stack is empty.\n");
        return;
    }

    printf("Top element is %d\n", stack[top]);
}


// Function to display all elements
void display()
{
    int i;

    // Check if stack is empty
    if(top == -1)
    {
        printf("Stack is empty.\n");
        return;
    }

    printf("Stack elements are:\n");

    // Print from top to bottom
    for(i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }
}


// Main function
int main()
{
    int choice;

    do
    {
        printf("\n------ STACK MENU ------\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 5);

    return 0;
}