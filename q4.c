#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int left, right;
    int palindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    left = 0;
    right = strlen(str) - 1;

    while (left < right) {

        if (tolower(str[left]) != tolower(str[right])) {
            palindrome = 0;
            break;
        }

        left++;
        right--;
    }

    if (palindrome)
        printf("The string is a palindrome.");
    else
        printf("The string is not a palindrome.");

    return 0;
}