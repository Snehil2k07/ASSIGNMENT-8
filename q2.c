#include <stdio.h>

int main()
{
    char original[100], copy[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(original, sizeof(original), stdin);

    // Copy characters one by one
    while (original[i] != '\0')
    {
        copy[i] = original[i];
        i++;
    }

    // Add null character at the end
    copy[i] = '\0';

    printf("Original string: %s", original);
    printf("Copied string: %s", copy);

    return 0;
}