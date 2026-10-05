#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person(string n, int a);

    void displayPerson();
};

Person::Person(string n, int a) {
    name = n;
    age = a;
}

void Person::displayPerson() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}


class Student : public Person {
private:
    int rollNo;
    string course;
    float marks;

public:
    Student(string n, int a, int r, string c, float m);

    void displayStudent();
    inline int getRollNo();
};

Student::Student(string n, int a, int r, string c, float m)
    : Person(n, a) {
    rollNo = r;
    course = c;
    marks = m;
}

void Student::displayStudent() {
    displayPerson();
    cout << "Roll No: " << rollNo << endl;
    cout << "Course: " << course << endl;
    cout << "Marks: " << marks << endl;
}

inline int Student::getRollNo() {
    return rollNo;
}

int main() {
    Student s("Aditya", 19, 101, "CSE", 85.5);

    s.displayStudent();

    cout << "Roll Number: " << s.getRollNo() << endl;

    return 0;
}