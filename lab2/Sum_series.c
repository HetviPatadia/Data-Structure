#include<stdio.h>
int main(){
    // if the user enters 3 then the program should follow the steps :
    // 1 + (1+2) + (1+2+3) so the ans should be 10
    int n;
    printf("enter n: ");
    scanf("%d" , &n);

    int temp=0, sum=0;

    for(int i=1 ; i<=n ; i++){
        temp = temp + i;
        sum = sum + temp;
    }

    printf("ans is: %d " , sum);

    return 0;
}