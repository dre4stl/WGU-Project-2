//
//  student.cpp
//  Student Data
//
//  Created by DeAundra Dyson on 7/2/20.
//  Copyright © 2020 DeAundra Dyson. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include "student.hpp"
#include "degree.h"

using namespace std;

Student::Student()//empty Constructor
{
    this->studentID = "";
    this->firstName = "";
    this->lastName = "";
    this->emailAddress = "";
    this->age =0;
    this->daystoComplete = new int [daystoCompleteCourseArraysize];
    for (int i = 0; i < daystoCompleteCourseArraysize; i++) {this->daystoComplete[i] = 0;}
}

Student::Student (string ID, string fName, string lName, string eAddress, int age, int daystoComplete[])//Full Constructor

// Having trouble with the Full Constructor































/*
 Student::Student(string i, string f, string l, string e, int a, int NoD[]){
  this->studentID = i;
  this->firstName = f;
  this->lastName = l;
  this->email = e;
  this->age = a;
  //this->numOfDays[numOfDaysArraySize] = new int tempArray[];
  for (int i=0; i<3; i++){
    this->numOfDays[i] = NoD[i];
  }
}

string Student::getStudentID() {
  return studentID;
}
void Student::setStudentID(string newStudentID){
  studentID = newStudentID;
}

string Student::getFirstName() {
  return firstName;
}
void Student::setFirstName(string newFirstName){
  firstName = newFirstName;
}

string Student::getLastName(){
  return lastName;
}
void Student::setLastName(string newLastName){
  lastName = newLastName;
}

string Student::getEmail() {
  return email;
}
void Student::setEmail(string newEmail) {
  email = newEmail;
}

int Student::getAge() {
  return age;
}
void Student::setAge(int newAge) {
  age = newAge;
}

int* Student::getNumOfDays(){
  return numOfDays;
}
void Student::setNumOfDays(int *nd){
  for (int i = 0;i < sizeof(numOfDays)/sizeof(numOfDays[0]);i++){
    numOfDays[i] = nd[i];
  }
}

void Student::print() {
    cout << "First Name: " << getFirstName() << "\t";
    cout << "Last Name: " << getLastName() << "\t";
    cout << "Age: " << getAge() << "\t";
    cout << "Days in course: ";
    for(int j=0; j<3; j++){
      cout << getNumOfDays()[j];
      if(j<2){
        cout << ", ";
      } else {
        cout << "\t";
      }
    }
}

//Deconstructor
Student::~Student(){
  cout << "Student Deconstructor for " << firstName << " " << lastName << endl;
  cout << endl;
}



D.  For the Student class, do the following:

  1.  Create the base class Student in the files student.h and student.cpp, which includes each  of the following variables:

  •   student ID
  •   first name
  •   last name
  •   email address
  •   age
  •   array of number of days to complete each course
  •   degree program
 
  Note: Degree type should be populated in subclasses only.
 

  2.  Create each of the following functions in the Student class:

    a.  an accessor (i.e., getter) for each  instance variable from part D1

    b.  a mutator (i.e., setter) for each  instance variable from part D1

    Note: All access and changes to the instance variables of the Student class should be done through the accessor and mutator functions.
 

    c.  constructor using all  of the input parameters provided in the table

    d.  virtual print() to print specific student data

    e.  destructor

    f.  virtual getDegreeProgram()
 
    Note: Leave the implementation of the getDegreeProgram() function empty.
 

  3.  Create the three following classes as subclasses of Student, using the files created in part B:

  •   SecurityStudent
  •   NetworkStudent
  •   SoftwareStudent

  Each subclass should override the getDegreeProgram() function. Each  subclass should have a data member to hold the enumerated type for the degree program using the types defined in part C.
*/
    
    
    
    
    
    
    
    
    
    
    
    
    
    
   
