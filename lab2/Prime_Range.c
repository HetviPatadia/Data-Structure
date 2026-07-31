//something is wrong in this.

#include<stdio.h>
int main(){
    int a,b;

    printf("enter starting number: ");
    scanf("%d", &a);

    printf("enter ending number: ");
    scanf("%d" , &b);

    

    for(int i=a; i<=b; i++){
        int flag=1;
        for(int j=2 ; j*j<=i; j++){
            if(i%j==0){
                flag=0;
                break;
            }
        }
        if(flag==1){
            printf("numbers are %d\n" , i);
        }
        else{}
    }
}