#include <iostream>
using namespace std;
class Student
{
public:
 Student()
 {
 cout << "Object Created" << endl;
 }
 ~Student()
 {
 cout << "Object Destroyed" << endl;
 }
};
int main()
{
 Student *s = new Student[3];
 delete[] s;
 return 0;
}