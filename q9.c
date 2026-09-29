#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    char word[50];
    char *ptr;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    printf("Enter word to search: ");
    scanf("%s", word);

    // Search for the word
    ptr = strstr(sentence, word);

    if (ptr != NULL) {
        printf("Word found at position %d\n",
               (int)(ptr - sentence) + 1);
    }
    else {
        printf("Word not found.\n");
    }

    return 0;
}