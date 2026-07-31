#include<stdio.h>
int main(){
    int n;

    printf("enter size of array: ");
    scanf("%d" , &n);

    int arr[n];

    for(int i=0 ; i<n ; i++){
        printf("enter elements: ");
        scanf("%d" , &arr[i]);
    }
     int value , position;
     
     printf("enter value to that you want to enter: ");
     scanf("%d" , &value);

     printf("enter the position at which you want to add an element: ");
     scanf("%d" , &position);

     for( int i=n-1 ; i>=position ; i--){
        arr[i] = arr[i-1];
     }
     arr[position-1] = value;
     for(int i=0 ; i<n ; i++){
        printf("%d" ,arr[i]);
     }

}