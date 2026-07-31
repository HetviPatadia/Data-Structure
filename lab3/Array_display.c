#include<stdio.h>
int main(){
    int n;
    printf("enter size of array: ");
    scanf("%d" , &n);

    int arr[n]; //created array of size n

    //to read elements
    for(int i=0; i<n; i++){
        printf("enter elements: ");
        scanf("%d" , &arr[i]);
    }

    //to print 
    for(int i=0; i<n; i++){
        printf("elements are:  %d\n " , arr[i]);
    }
}