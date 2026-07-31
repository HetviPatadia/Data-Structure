//this code is incomplete.

#include<stdio.h>

#define max 5 // to declare stack[max] use thi keyword : define variable_name size

int stack[max], top=-1;

int main(){
    int choice , pos , x ;

    do{
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Peek\n");
        printf("4.Change\n");
        printf("5.Display\n");
        printf("6.Exit\n");
        printf("enter your :choice: ");
        scanf("%d" , &choice);


        switch(choice){
            case 1: //PUSH(STACK , TOP , X)
               PUSH(x);
               printf("pushed elements: %d " , x);
                break;

            default:
                printf("invalid choice");
        }

    }
    while(choice!=6);

    
}

void PUSH(int x){
    if(top == max-1){
        printf("stack overflow");
    }

    else{
        printf("enter element: ");
        scanf("%d" , &x);
        top++;
        stack[top]= x;
    }

}