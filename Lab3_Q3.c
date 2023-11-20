#include <stdio.h>

int main() {
    int n;

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

    // Print array elements using pointers
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));  // Print elements using pointer arithmetic
    }
    printf("\n");

    return 0;
}
