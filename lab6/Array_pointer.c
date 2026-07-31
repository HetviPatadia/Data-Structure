#include<stdio.h>
int main(){
    int n;
    printf("enter size of array: ");
    scanf("%d" , &n);

    int arr[n];
    int *ptr;
    int i;

    for(i=0 ; i<n ; i++){
        printf("enter elements: ");
        scanf("%d" , &arr[i]);
    }

    ptr = arr ;

    printf("elements entered are: \n");
    for(int i=0 ; i<n ;i++){
        printf("%d " , *ptr);
        ptr++;
    }

}