#include <stdio.h>

int main() {
  int x = 10;
  int y = 0;

  // Check for division by zero before performing the operation
  if (y != 0) {
    int z = x / y;
    printf("Result: %d\n", z);
  } else {
    printf("Error: Division by zero!\n");
  }

  return 0;
} 