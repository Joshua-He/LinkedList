#include <iostream>
#include <string.h>
#include "Student.h"

using namespace std;

//constructor
Student::Student(){
  firstName[0] = '\0';
  lastName[0] = '\0';
  id = 0;
  gpa = 0;
}
//deconstructor
Student::~Student(){

}
// Creates a student.....
void Student::createStudent(){
  cout << "Enter first name" << endl;
  cin >> firstName;
  cout << "Enter last name" << endl;
  cin >> lastName;
  cout << "Enter id" << endl;
  cin >> id;
  cout << "Enter gpa" << endl;
  cin >> gpa;

}

void Student::printStudent() {
  cout << "Student: " << firstName << " " << lastName << ", " << id << ", " << gpa << endl;
}
