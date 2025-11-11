#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;
//#write student class here
class Student {
protected:
    int yrLevel;
    string major;
public:
    Student(int yrLevel, string major);
    void display();
    ~Student();
};
#endif
