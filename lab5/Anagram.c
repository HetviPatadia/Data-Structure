#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int isAnagram(char str1[], char str2[]) {
    int count1[256] = {0};
    int count2[256] = {0};
    int i;

    // If lengths are not equal → not anagram
    if (strlen(str1) != strlen(str2))
        return 0;

    // Count characters
    for (i = 0; str1[i] && str2[i]; i++) {
        count1[str1[i]]++;
        count2[str2[i]]++;
    }

    // Compare counts
    for (i = 0; i < 256; i++) {
        if (count1[i] != count2[i])
            return 0;
    }

    return 1;
}

int main() {
    int n, i, index;
    char words[50][50], userWord[50];

    printf("Enter number of words: ");
    scanf("%d", &n);

    printf("Enter %d words:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%s", words[i]);
    }

    // Generate random index
    srand(time(0));
    index = rand() % n;

    printf("\nGiven Word: %s\n", words[index]);
    printf("Enter its anagram: ");
    scanf("%s", userWord);

    // Check anagram
    if (isAnagram(words[index], userWord)) {
        printf(" Correct! It is an anagram.\n");
    } else {
        printf(" Incorrect! Not an anagram.\n");
    }

    return 0;
}