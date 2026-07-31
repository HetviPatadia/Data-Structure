#include<stdio.h>
int main(){

    int n;
    printf("enter size of array: ");
    scanf("%d" , &n);

    int arr[n];

    for(int i=0; i<n ;i++){
        printf("enter elements: ");
        scanf("%d" , &arr[i]);
    }

    int max , *ptr;
    ptr = arr ;
    max = *ptr ;

    for ( int i=0 ; i<n ; i++){
        if(*ptr>max){
            max= *ptr;
        }
        ptr++;
    }

    printf("maximum: %d", max);
    
}