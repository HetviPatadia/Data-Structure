// 26. Write a program to insert a number in an array that is already sorted in an ascending order. 

#include<stdio.h>

int main(){
    int n;
    printf("enter no. of elements :");
    scanf("%d",&n);
    int a[n];

    for(int i=0 ; i<n-1 ; i++){
        printf("enter elements in ascending order: ");
        scanf("%d",&a[i]);
    }

    int value , loc=0 ; 
    printf("enter value to insert: ");
    scanf("%d",&value);

    for(int i=0 ; i<n ; i++){
        if (a[i] < value)
        {
            loc ++ ;
        }
    }

    for(int i=n-1 ; i>=loc ; i--){
        a[i] = a[i-1] ;
    }

    a[loc] = value ;
    
    for(int i=0 ; i<n ; i++){
        printf("%d ",a[i]);
    }

    return 0 ;

}