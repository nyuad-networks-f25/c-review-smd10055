#include <stdio.h>
int main() {

  int number;
  printf("Enter a number: ");
  scanf("%d", &number);

  int readnum = number;
  if (readnum % 3 == 0 && readnum % 5 == 0) {
    printf("%s \n", "foobar");
  } else if (readnum % 3 == 0) {
    printf("%s \n", "foo");
  } else if (readnum % 5 == 0) {
    printf("%s \n", "bar");
  } else {
    printf("%s\n", "Entry not valid try again! ");
  }
  return 0;
}