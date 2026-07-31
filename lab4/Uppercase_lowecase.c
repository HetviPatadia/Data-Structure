#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);  // for full line input

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // to uppercase
        }
        else if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32; // to lowercase
        }
    }

    printf("Updated string: %s", str);

    return 0;
}
