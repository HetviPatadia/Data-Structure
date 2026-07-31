#include<stdio.h>
#define max 100

int stack[max];
int top= -1;

int main(){

    int n;
    printf("how many times you want to push elements?");
    scanf("%d" , &n);

    int value;

    for(int i=0 ; i<n ; i++){
        printf("enter value to push : ");
        scanf("%d" , &value);

        if(top == max - 1)
    {
        printf("Overflow");
        break;
    }
    else
    {
        top++;
        stack[top] = value;

        // printf("%d inserted.", value);
    }
    }

    printf("\nStack is:\n");

    //this is the logic to display the whole stack
    for(int i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }
    return 0;
}
