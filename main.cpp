#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================
class Person{
    protected:
    string name;
    int id;

    public:
    Person(string name, int id) {
        this->name = name;
        this->id = id;

    }
    void display() {
        cout << "Name: " << name << "ID: " << id << endl;

    }
~Person() {

    }

};

// ==================== Student Class Implementation ====================
class Student {
    protected:
    int yrLevel;
    string major;

    public:
    Student(int yrLevel, string major) {
        this->yrLevel = yrLevel;
        this->major = major;

    }
    void display() {
        cout << "Year Level: " << yrLevel << "Major: " << major << endl;

    }
~Student() {

    }

};

// ==================== Instructor Class Implementation ====================
class Instructor {
    protected:
    string department;
    int expYears;

    public:
    Instructor(string department, int expYears) {
        this->department = department;
        this->expYears = expYears;

    }
    void display() {
        cout << "Department: " << department << "Experience Years: " << expYears << endl;

    }
    ~Instructor() {

    }

};

// ==================== Course Class Implementation ====================
class Course {
    protected:
    string courseCode;
    string courseName;
    int maxStudents;
    int currentStudents;
    int *student;

    public:
    Course(string courseCode, string courseName, int maxStudents, int currentStudents) {
        this->courseCode = courseCode;
        this->courseName = courseName;
        this->maxStudents = maxStudents;
        this->currentStudents = currentStudents;



    }
    int addNewStudent(const Student& s) {
        return currentStudents++;

    }
    void displayCourseInfo() {
        cout << "Code:" << courseCode << "Name: " << courseName <<
            "Count: " << maxStudents << "Enrolled: " << currentStudents << endl;

    }
    ~Course() {

    }

};

// ==================== Main Function ====================
int main() {
    Person p("Nada", 16004177);
    Student s("Omar Nambil", "CS");
    Instructor i("CS Department", "Dr Lina Khaled");
    Course c("1999", "Programming", 30, 7);
    c.addNewStudent(s);
    c.displayCourseInfo();

    return 0;
}
