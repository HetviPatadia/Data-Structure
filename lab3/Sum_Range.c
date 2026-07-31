#include<stdio.h>
int main(){
    int m ,n ;
    printf("enter m: "); 
    scanf("%d" , &m);

    printf("enter n: ");
    scanf("%d" , &n);

    int sum=0;
    for(int i=m ;i<=n ; i++){
        if(m<n){
            sum = sum+i;
        }
    }
    printf("summation ans: %d " , sum);

    //if m=2 and n=4 then addition should be 2+3+4
}