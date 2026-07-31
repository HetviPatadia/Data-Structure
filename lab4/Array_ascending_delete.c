// 27. Write a program to delete a number from an array that is already sorted in an ascending order.

#include <stdio.h>

int main()
{
    int n;
    printf("enter no. of elements :");
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("enter elements in ascending order: ");
        scanf("%d", &a[i]);
    }

    int value, loc = 0;
    printf("enter value to delete: ");
    scanf("%d", &value);

    for (int i = 0; i < n; i++)
    {
        if (a[i] <= value)
        {
            loc++;
        }
    }

    if (loc = n - 1)
    {
        printf("\nthe no entered is not present in the array so we cannot delete it\n");
    }
    else
    {
        for (int i = loc; i < n; i++)
        {
            a[i] = a[i + 1];
        }

        n = n - 1;

        printf("New array after insertion. ");
        printf("\nnew size of array is %d\n", n);
        for (int i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
    }

    return 0 ;

}