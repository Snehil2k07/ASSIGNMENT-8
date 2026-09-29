#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int count;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Convert entire string to lowercase
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }

    printf("Character frequencies:\n");

    for (int i = 0; str[i] != '\0'; i++) {

        // Ignore spaces and newline
        if (str[i] == ' ' || str[i] == '\n')
            continue;

        // Check if character was already counted
        int alreadyCounted = 0;

        for (int k = 0; k < i; k++) {
            if (str[i] == str[k]) {
                alreadyCounted = 1;
                break;
            }
        }

        if (alreadyCounted)
            continue;

        // Count frequency
        count = 0;

        for (int j = 0; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }

        printf("%c = %d\n", str[i], count);
    }

    return 0;
}