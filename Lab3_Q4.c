#include <stdio.h>

int main() {
    int n, key;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid array size. Please enter a positive integer.\n");
        return 1;
    }

    int arr[n];  // Declare an array of size 'n'

    // Input array elements using pointers
    printf("Enter %d array elements:\n", n);
    int *ptr = arr;  // Pointer to the first element of the array

    for (int i = 0; i < n; i++) {
        scanf("%d", ptr + i);  // Input elements using pointer arithmetic
    }

    // Ask the user for the element to search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    int found = 0;  // Flag to track if the element is found
    for (int i = 0; i < n; i++) {
        if (*(ptr + i) == key) {
            found = 1;
            printf("%d found at position %d.\n", key, i + 1);
            break;  // Exit the loop when the element is found
        }
    }

    if (!found) {
        printf("%d not found in the array.\n", key);
    }

    return 0;
}
