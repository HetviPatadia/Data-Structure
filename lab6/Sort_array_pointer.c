#include<stdio.h>

int main()
{
    int n;

    printf("enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    for(int i=0; i<n; i++)
    {
        printf("enter elements: ");
        scanf("%d", &arr[i]);
    }

    int *ptr, temp;

    ptr = arr;

    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(*(ptr+j) > *(ptr+j+1))
            {
                temp = *(ptr+j);
                *(ptr+j) = *(ptr+j+1);
                *(ptr+j+1) = temp;
            }
        }
    }

    printf("sorted array: ");

    for(int i=0; i<n; i++)
    {
        printf("%d ", *(ptr+i));
    }

    return 0;
}