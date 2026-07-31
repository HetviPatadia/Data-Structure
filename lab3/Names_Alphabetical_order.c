#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    printf("how many number of names you want to enter?");
    scanf("%d", &n);

    char name[n][100];
    char temp[100];

    for (int i = 0; i < n; i++)
    {
        printf("enter name: ");
        scanf("%s", &name[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(name[i], name[j]) > 0)
            {

                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }
    printf("\nNames in alphabetical order:\n");

    for (int i = 0; i < n; i++)
    {
        printf("%s\n", name[i]);
    }

    return 0;
}