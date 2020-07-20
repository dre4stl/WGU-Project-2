//
//  student.hpp
//  Student Data
//
//  Created by DeAundra Dyson on 7/2/20.
//  Copyright © 2020 DeAundra Dyson. All rights reserved.
//

#ifndef student_hpp
#define student_hpp
#include <iostream>
#include <string>
#include "degree.h"
using namespace std;

class Student
{private:
    
    string studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    int* daystoComplete; //Days to complete course
    Degree degree;
    
    
public:
    const static int daystoCompleteCourseArraysize = 3;
    Student();//empty Constructer
    Student(string ID, string firstName, string lastName, string emailAdress, int age, int daystoComplete, Degree degree);//Full Constructer



    //accessor aka getters
    string getID();
    string getfirstName();
    string getlastName();
    string getemailAddress();
    int getage();
    int* getdaystoComplete();
    Degree getdegree();

    //mutators aka setters
    void setID(string ID);
    void setfirstName(string firstName);
    void setlastName(string lastName);
    void setemailAddress(string emailAddress);
    void setage(int age);
    void setdaystoComplete(int daystoComplete[]);
    void setDegree(Degree degree);
    void Print();

//Decontructor
~Student();
};
#endif /* student_hpp */
