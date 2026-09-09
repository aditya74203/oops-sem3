// create a class called employee with private salary and create a friend class hr to calculate the total annual salary of the employee.
#include <iostream>
using namespace std;
class HR;

class employee{
    private:
    int salary;
    public:
    employee(int s){
        salary=s;
    }
    friend class HR;
};
class HR{
    
    public:
    int calculateTotalSalary(employee e){
        return e.salary;
    }
    void displaySalary(employee e){
        cout<<"Salary of the employee is: "<<e.salary<<endl;
    }
    int calculateAnnualSalary(employee e){
        return e.salary*12;
    }

};
int main(){
    employee e(5000);
    HR hr;
    hr.displaySalary(e);
    cout<<"Total Annual Salary of the employee is: "<<hr.calculateAnnualSalary(e)<<endl;
    return 0;
}