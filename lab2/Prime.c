#include<stdio.h>

//instead of giving proofs , use such type of logic that you can prove its wrong.
//eg- instead or proving it's a prime number. Try proving non- prime that would be easier
int main(){
    int n , i , flag= 1;

    printf("enter number: ");
    scanf("%d" , &n);

    for(int i=2; i<n/2 ; i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }
    if(flag==1){
        printf(" %d is prime " , n);
    }
    else{
        printf(" %d is composite ", n);
    }
}