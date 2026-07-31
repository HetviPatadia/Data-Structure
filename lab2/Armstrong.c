#include<stdio.h>
int main(){

    // logic: 153 then 1 cube + 3 cube + 5 cube 
    // if ans equal to 153 then the number is considered armstrong 
    // if 4 digit number is entered then you have to do addition till raised to power 4

    int n;
    printf("enter a number: "); //153
    scanf("%d" , &n);

    int original , temp , digit;
    int sum = 0 , count = 0;

    original = n; //original=153


    // firstly we need to count the digits
    temp = n; //temp = 153
    while(temp > 0){ //153>0 then 15>0 then 1>0
        count++; //1 then 2 then 3
        temp = temp/10; //15 then 1 then 0
    }

    temp =n; // again temp = 153

    while(temp!=0){ // 153 not equal to 0
        digit = temp %10; 

        int power = 1;

        for( int i=1; i<=count ; i++){
            power = power * digit;
        }
        sum += power;
        temp = temp/10;
    }
    if(sum == original){
        printf("%d is an armstrong number.", n);
    }
    else{
        printf("%d is not an armstrong number.", n);
    }
}