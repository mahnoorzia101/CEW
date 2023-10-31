#include <stdio.h>

int compareStrings(char str1[], char str2[]) {
    int i=0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return 0; // Strings are different
        }
        // str1++;
        // str2++;
        i++;
    }

    // Check if both strings have reached the end
    if (str1[i] == '\0' && str2[i] == '\0') {
        return 1; // Strings are equal
    } else {
        return 0; // Strings are of different lengths
    }
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    if (compareStrings(str1, str2)) {
        printf("The strings are same.\n");
    } else {
        printf("The strings are not same.\n");
    }

    return 0;
}
