#include<stdio.h>
int main(){
    int n;
    printf("enter n: ");
    scanf("%d" , &n);

    int sum=0;
    for(int i=1; i<=n;i++){
        sum = sum+i;
    }
    float avg;
    avg = (float)sum/n; //do not forget to type cast 
    printf("average is: %.2f" , avg); // .2f means decimal upto 2 digits will be displayed

    
}