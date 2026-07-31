#include<stdio.h>

// first extract the smallest and largest number 
//then you have to display them with thei
int main(){
    
    int n;

    printf("enter size for array: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        printf("enter elements: ");
        scanf("%d" , &n);

        int max , min , arr[n] , temp1=0 , temp2=0 ;
        max= arr[0];
        min = arr[0];

        for(int i=0;i<n;i++){
            if(max<arr[i]){
                max = arr[i];
                temp1 = i ;
            }
            if(min> arr[i]){
                min = arr[i];
                temp2 = i;
            }
        }
        printf("max: %d" , max);
        printf("index of max: %d" ,temp1);

        printf("min: %d" , min);
        printf("index of min: %d", temp2);


        return 0;

    }
}
