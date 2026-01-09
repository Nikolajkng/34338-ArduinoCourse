#include <stdio.h>

int main() {

  // Declare an int variable x and set it to 10
  int x = 10;

  // Declare an int pointer p
  int *p;

  // Store the address of x inside p
  p = &x;

  // Print the value of x by dereferencing p
  printf("\n");
  printf("Pointer: %p", p);
  printf("\n");
  printf("Deref of pointer: %d", *p);
  printf("\n");

  return 0;
}