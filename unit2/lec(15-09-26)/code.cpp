#include <iostream>
#include <cstring>
using namespace std;

class Employee {
private:
    int id;
    char* name;

public:
   
    Employee() {
        id = 0;
        name = new char[1];
        name[0] = '\0';

        cout << "Default Constructor called" << endl;
    }

  
    Employee(int i, const char* n) {
        id = i;

        name = new char[strlen(n) + 1];
        strcpy(name, n);

        cout << "Parameterized Constructor called" << endl;
    }

    Employee(const Employee& e) {
        id = e.id;

        
        name = new char[strlen(e.name) + 1];
        strcpy(name, e.name);

        cout << "Copy Constructor called" << endl;
    }

    void display() {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
    }

    
    ~Employee() {
        cout << "Destructor called for " << name << endl;
        delete[] name;
    }
};

int main() {

  
    Employee e1;

   
    Employee e2(101, "Aditya");

    Employee e3 = e2;

    cout << "\nEmployee 1:" << endl;
    e1.display();

    cout << "\nEmployee 2:" << endl;
    e2.display();

    cout << "\nEmployee 3:" << endl;
    e3.display();

    return 0;
}