#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
//#write your code here
class Course {
protected:
    string courseCode;
    string courseName;
    int maxStudents;
    int currentStudents;
    int* student;
public:
    Course(string courseCode, string courseName, int maxStudents, int currentStudents);
    int addNewStudent(const Student& s);
    void displayCourseInfo();
    ~Course();
};
#endif
