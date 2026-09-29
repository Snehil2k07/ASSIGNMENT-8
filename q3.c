#include <stdio.h>

int main()
{
    char str1[200], str2[100];
    int i = 0, j = 0;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Find the end of str1
    while (str1[i] != '\0')
    {
        i++;
    }

    // Copy str2 at the end of str1
    while (str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }

    // Add null character at the end
    str1[i] = '\0';

    printf("Concatenated string = %s", str1);

    return 0;
}