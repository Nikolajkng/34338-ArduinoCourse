#include <stdio.h>

int main() {

  // Declare an int variable x
  int x = -1;
  int buffer = x;

  // Declare an int pointer p pointing to x
  int *p = &x;
  
  // Declare an int pointer-to-pointer q pointing to p
  int **q = &p;
  
  // Use q to modify x indirectly (double dereference)
  **q = 45;

  // Print x
  printf("Old: %d\n", buffer);
  printf("New: %d\n", x);


  return 0;
}
