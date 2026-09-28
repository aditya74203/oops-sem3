#include <iostream>
#include <memory>
using namespace std;

class Student {
    string name;
    int age;

public:
    Student(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    unique_ptr<Student> ptr = make_unique<Student>("Aditya", 19);
    ptr->display();
    return 0;
}