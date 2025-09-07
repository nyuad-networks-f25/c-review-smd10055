#include "sizeinfo.h"
#include <stdio.h>
void system_sizes() {
  printf("--- Size of Data Types on this System ---\n");
  printf("Size of char:        %zu bytes\n", sizeof(char));
  printf("Size of int:         %zu bytes\n", sizeof(int));
  printf("Size of short:       %zu bytes\n", sizeof(short));
  printf("Size of long:        %zu bytes\n", sizeof(long));
  printf("Size of long long:   %zu bytes\n", sizeof(long long));
  printf("Size of float:       %zu bytes\n", sizeof(float));
  printf("Size of double:      %zu bytes\n", sizeof(double));
  printf("Size of long double: %zu bytes\n", sizeof(long double));
  printf("----------------------------------------\n");
}

// Calls the system_sizes() function to print the size information.

int main() {
  system_sizes();
  return 0;
}
