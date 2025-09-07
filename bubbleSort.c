#include <stdbool.h>
#include <stdio.h>

void exchange(int *p1, int *p2) {
  int place = *p1;
  *p1 = *p2;
  *p2 = place;
}

void bSort(int array[], int n) {
  int a, b;
  bool swapped;
  for (a = 0; a < n - 1; a++) {
    swapped = false;

    for (b = 0; b < n - a - 1; b++) {
      if (array[b] > array[b + 1]) {
        exchange(&array[b], &array[b + 1]);
        swapped = true;
      }
    }
    if (swapped == false) {
      break;
    }
  }
}
void printArray(int a[], int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}

int main() {
  int array[] = {56, 3, 7, 5, 78, 67, 56, 65, 5, 1};
  int num = sizeof(array) / sizeof(array[0]);
  bSort(array, num);
  printf("Sorted Array:  \n");
  printArray(array, num);
  return 0;
}