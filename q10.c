#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    char *word;
    int count = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Get the first word
    word = strtok(sentence, " \n");

    printf("Words are:\n");

    while (word != NULL) {
        printf("%s\n", word);
        count++;

        // Get the next word
        word = strtok(NULL, " \n");
    }

    printf("Total number of words = %d\n", count);

    return 0;
}