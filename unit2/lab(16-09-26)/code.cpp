#include <iostream>
using namespace std;
class Student
{
public:
 string name;
 void display()
 {
 cout << "Name: " << name << endl;
 }
};
int main()
{
 Student s1;
 s1.name = "Rahul";
 Student *ptr = &s1; // Pointer to object
 cout << ptr->name << endl;
 ptr->display();
 return 0;
}