#include <iostream>
using namespace std;

class Employee
{
private:
    float basicSalary;

public:
    Employee(float salary)
    {
        basicSalary = salary;
    }

    friend float calculateGrossSalary(Employee e);
};

float calculateGrossSalary(Employee e)
{
    float HRA = 0.20 * e.basicSalary;
    float DA = 0.10 * e.basicSalary;

    return e.basicSalary + HRA + DA;
}

int main()
{
    float salary;

    cout << "Enter basic salary: ";
    cin >> salary;

    Employee emp(salary);

    cout << "Gross Salary = " << calculateGrossSalary(emp) << endl;

    return 0;
}