#include <stdio.h>
#include <string.h>

int main() {
    char firstName[50];
    char lastName[50];
    char fullName[100];

    printf("Enter first name: ");
    scanf("%s", firstName);

    printf("Enter last name: ");
    scanf("%s", lastName);

    // Copy first name into fullName
    strcpy(fullName, firstName);

    // Add a space
    strcat(fullName, " ");

    // Add last name
    strcat(fullName, lastName);

    printf("Complete name: %s\n", fullName);

    return 0;
}