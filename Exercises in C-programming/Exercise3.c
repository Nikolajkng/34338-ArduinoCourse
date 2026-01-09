#include <stdio.h>

int main() {

  // Create an int array with 5 values
  int arr[] = {2, 4, 6, 8, 10};

  // Create an int pointer p that refers to the first element
  int *p = arr;

  // Loop from index 0 to 4
  for (int i = 0; i < 5; i++) {
    // For each index, print the element by dereferencing
    // (p moved forward by that index)
    printf("%d\n", *(p + i));
  }

  return 0;
}