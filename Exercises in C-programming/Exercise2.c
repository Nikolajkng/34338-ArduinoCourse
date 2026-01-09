#include <stdio.h>

int main() {

  // Declare a float variable temperature and set it to 36.6
  float temp = 36.6;
  float old_temp = temp;

  // Declare a float pointer p and point it to temperature
  float *p = &temp;

  // Change temperature by writing through p
  *p = 100;

  // Print temperature to confirm it changed
  printf("\n");
  printf("Old Temp: %f", old_temp);
  printf("\n");
  printf("New Temp: %f", temp);
  printf("\n");

  return 0;
}