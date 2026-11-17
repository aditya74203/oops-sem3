// create overloaded function named interest to calculate simole interest using 
// 1. roiciple and rate 
//2.principle ,rate and time 
// create a base class bank with function get interest rate niw derive sbi ,hdfc,icici class and iverwrite the function
//create a class distance and overload the eaqual to operator to compare two distance objects.
#include <iostream>
using namespace std;

class Interest
{
public:

    void interest(float p, float r)
    {
        float si = (p * r) / 100;
        cout << "Simple Interest = " << si << endl;
    }

    
    void interest(float p, float r, float t)
    {
        float si = (p * r * t) / 100;
        cout << "Simple Interest = " << si << endl;
    }
};

int main()
{
    Interest obj;

    obj.interest(10000, 5);
    obj.interest(10000, 5, 2);

    return 0;
}