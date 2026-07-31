#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];

    printf("enter string: ");
    scanf("%s", str);

    int len = strlen(str);

    char *ptr = str;

    for(int i=0, j=len-1; i<j; i++, j--)
    {
        if(*(ptr+i) != *(ptr+j))
        {
            printf("not palindrome");
            return 0;
        }
    }

    printf("palindrome");

    return 0;
}