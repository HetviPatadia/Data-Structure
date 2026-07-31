#include<stdio.h>
#include<stdlib.h>

int main(){
    int *p1 ;
    char *p2;
    float *p3;

    p1 = (int*)malloc(sizeof(int));
    p2 = (char*)malloc(sizeof(char));
    p3 = (float*)malloc(sizeof(float));

    printf("enter integer:");
    scanf("%d" , p1);

    printf("enter character: ");
    scanf(" %c" , p2);

    printf("enter floating point number: ");
    scanf("%f" , p3);

    printf("integer: %d , character: %c , floating point number: %f ", *p1, *p2, *p3);

    free(p1);
    free(p2);
    free(p3);


}