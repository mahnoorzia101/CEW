#include <stdio.h>

typedef struct {
  int feet;
  int inches;
} Distance;

int main() {
  Distance d1, d2, sum;

  // Get the first distance from the user
  printf("Enter the first distance in feet and inches: ");
  scanf("%d %d", &d1.feet, &d1.inches);

  // Get the second distance from the user
  printf("Enter the second distance in feet and inches: ");
  scanf("%d %d", &d2.feet, &d2.inches);

  // Add the two distances
  sum.feet = d1.feet + d2.feet;
  sum.inches = d1.inches + d2.inches;

  // Convert the inches to feet if necessary
  if (sum.inches >= 12) {
    sum.feet++;
    sum.inches -= 12;
  }

  // Print the sum of the two distances
  printf("The sum of the two distances is %d feet and %d inches.\n", sum.feet, sum.inches);

  return 0;
}