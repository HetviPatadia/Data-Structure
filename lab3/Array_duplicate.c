#include<stdio.h>

int main() {
    int n;

    printf("Enter size: ");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
        printf("Enter element: ");
        scanf("%d",&arr[i]);
    }

    int dup=0;

    for(int i=0;i<n;i++){

        for(int j=0;j<i;j++){

            if(arr[i]==arr[j]){
                dup++;
                break;   // count this element once only
            }
        }
    }

    printf("Total duplicates: %d",dup);

    return 0;
}