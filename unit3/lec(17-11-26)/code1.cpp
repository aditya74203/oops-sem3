// create a base class employee with a function work derive a class manager and override the function.
#include <iostream>
using namespace std;
class employee{
    public:
    void work(){
        cout<<"employee is working"<<endl;
    }
};
class manager : public employee{
    public:
    void work(){
        cout<<"manager is managing the team"<<endl;

    }
};
int main(){
    employee e;
    manager m;
    e.work();
    m.work();
     return 0;
}