#include <stdio.h>

int main() {
  int arr[100], n, i, j, k;

  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);

  printf("Enter %d elements in the array: ", n);
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  // Print the original array
  printf("The original array is: ");
  for (i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  // Create an empty array to store the unique elements
  int unique[100];
  int unique_count = 0;

  // Iterate over the original array and add each unique element to the unique array
  for (i = 0; i < n; i++) {
    int is_unique = 1;

    // Check if the current element is already present in the unique array
    for (j = 0; j < unique_count; j++) {
      if (arr[i] == unique[j]) {
        is_unique = 0;
        break;
      }
    }

    // If the current element is unique, add it to the unique array
    if (is_unique) {
      unique[unique_count] = arr[i];
      unique_count++;
    }
  }

  // Print the unique elements
  printf("The unique elements in the array are: ");
  for (i = 0; i < unique_count; i++) {
    printf("%d ", unique[i]);
  }
  printf("\n");

  return 0;
}