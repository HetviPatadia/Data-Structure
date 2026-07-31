#include<stdio.h>
int main(){
    int n;

    printf("enter the number till which you want to do the sum: ");
    scanf("%d" , &n);

    int a=1 , sum=0;
    int *ptr = &a;
    

    for(int i=0; i<n ; i++){
        sum = sum + *ptr;
        (*ptr)++;
    }

    printf("sum of numbers till %d is equal to %d" , n , sum);
}