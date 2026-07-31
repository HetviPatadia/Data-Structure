#include <stdio.h>
int main()
{
    int n;
    printf("enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter elements: ");
        scanf("%d", &arr[i]);
    }

    int replace, new;

    printf("enter the number that you want replace in the array: "); // array mathi kyo number replace krvo che?
    scanf("%d", &replace);

    printf("enter the number that you want to add at the replaced position: ");// number replace kri ne ena jgya a kyo add krvo che?
    scanf("%d", &new);

    int index;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == replace)
        {
            arr[i] = new;
            index = i;
        }
    }
    // printf("old array elements were : %d" , arr[i]);
    printf("new array elements are: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",arr[i]);
    }
}