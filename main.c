

#include "student.h"
#include <stdbool.h>
#include <stdio.h>
int main() {
  printf("%d", ENROLLED);
  // Define Student
  student_t student1 = {"Mary", true};
  printf("Student Name: %s\n", student1.name);
  printf("Student Status: %s\n", student1.status ? "Enrolled" : "Not Enrolled");

  return 0;
}