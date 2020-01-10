#include "student.h"

void printStudent(struct Student student[50], int num){
      for (int i = 1; i <= num; i++)  {
              printf("\nStudent %d:\n", i);
              printf(" First name: %s\n", student[i].first);
              printf(" Last name: %s\n" ,student[i].last);
              printf(" Age: %d\n", *student[i].age);
              printf(" Student ID: %d\n", *student[i].id);
      }
}

