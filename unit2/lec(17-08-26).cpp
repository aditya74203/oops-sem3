#include <iostream>
using namespace std;

class Employee {
public:
    string name;
    int age;
    int id;

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "ID: " << id << endl;
    }
};

int main() {
    Employee emp;

    emp.name = "Aaditya";
    emp.age = 20;
    emp.id = 101;

    Employee *ptr = &emp;

    cout << "Employee Details:" << endl;
    cout << "Name: " << ptr->name << endl;
    cout << "Age: " << ptr->age << endl;
    cout << "ID: " << ptr->id << endl;

    return 0;
}