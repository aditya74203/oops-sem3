#include <iostream>
using namespace std;
class Employee
{
public:
 string Name;
 int id;
 void display()
 {
 cout << "Employee Name: " << Name << endl;
 cout<< "Employee ID: " <<id<<endl;
 }
};
int main()
{
 Employee *emp = new Employee;
 emp->Name = "Aadi";
 emp->id = 101;
 emp->display();
 emp->Name ="ak";
 emp->id =102;
 emp->display();
 delete emp;
 emp=nullptr;
 return 0;
}