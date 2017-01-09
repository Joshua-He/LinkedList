#include <iostream>
#include <string.h>


//Student class, it has four different variables for the name, student id, and gpa......
class Student{
 public:
  Student();
  ~Student();
  void createStudent();
  void printStudent();
  
 private:
  char firstName[80];
  char lastName[80];
  int id;
  float gpa;
};
