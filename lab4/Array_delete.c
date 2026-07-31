// 25. Write a program to delete a number from a given location in an array. 

#include<stdio.h>

int main(){
    int n;
    printf("enter no. of elements :");
    scanf("%d",&n);
    int a[n];

    for(int i=0 ; i<n ; i++){
        printf("enter elements : ");
        scanf("%d",&a[i]);
    }

    int pos ;
    printf("enter position to delete : ");
    scanf("%d",&pos);

    for(int i=pos ; i<n ; i++){
        a[i-1] = a[i] ; 
    }
    n=n-1 ; 

    printf("New array after insertion. ");
    printf("\nnew size of array is %d\n",n);
    for(int i=0 ; i<n ; i++){
        printf("%d ",a[i]);
    }

    return 0;

}