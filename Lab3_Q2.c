#include <stdio.h>

void printReverse(const char *str) {
    if (str == NULL) {
        printf("String is empty.\n");
        return;
    }

    const char *ptr = str;
    while (*ptr != '\0') {
        ptr++;
    }
    ptr--;  // Move back one position to the last character (skip the null terminator)

    while (ptr >= str) {
        printf("%c", *ptr);
        ptr--;
    }
    printf("\n");
}

int main() {
    const char *text = "Hello, World!";
    printf("Original string: %s\n", text);
    printf("Reversed string: ");
    printReverse(text);

    return 0;
}