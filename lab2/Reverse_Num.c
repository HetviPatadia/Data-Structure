#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d" , &n);

    int temp = n;
    int rev=0, rem;
    
    while(temp>0){
        rem = temp % 10; //extracting last digit
        rev = rev*10 + rem; 
        temp= temp/10 ; //removing the last digit    
        
    }
    printf(" reverse number: %d" , rev);

    return 0;
}