#include<stdio.h>
int main(){
    int x;
    printf("enter number: ");
    scanf("%d", &x);

    int y;
    printf("enter power: ");
    scanf("%d", &y);

    int z=1, i=1;

    while(y>0 && i<=y){ //if y=0 then ans will be 1
        z= z*x;
        i++;
    }
    printf("%d raised to %d is %d" , x , y , z);
}