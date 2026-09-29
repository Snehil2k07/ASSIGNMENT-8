#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char ch;
    char *ptr;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter character to search: ");
    scanf(" %c", &ch);

    // Find first occurrence of character
    ptr = strchr(str, ch);

    if (ptr != NULL) {
        printf("Character found at position %d\n",
               (int)(ptr - str) + 1);
    }
    else {
        printf("Character not found.\n");
    }

    return 0;
}