#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
using namespace std;

// Structure
struct Student {
    int id;
    string name;
    int age;
    string course;
};

// Function declarations
void addStudent();
void displayStudents();
void searchStudent();
void updateStudent();
void deleteStudent();

#endif
