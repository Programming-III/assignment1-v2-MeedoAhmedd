#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
//#write Instructor class here
class Instructor {
protected:
    string department;
    int expYears;
public:
    Instructor(string department, int expYears);
    void display();
    ~Instructor();
};
#endif
